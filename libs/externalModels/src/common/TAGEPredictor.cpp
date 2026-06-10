#include "models/common/TAGEPredictor.h"
#include "cmath"
#include <cstdlib>

// helper function to generate geometric history lengths
std::vector<int> TagePredictor::generateHistoryLengths(int numTables, int minHist, int maxHist) {
    std::vector<int> lengths(numTables);
    for (int i = 0; i < numTables; i++) {
        lengths[i] = (int)(minHist * pow((double)maxHist / minHist, (double)i / (numTables - 1)) + 0.5);
    }
    return lengths;
}

// helper function to generate per-table tag widths (paper Table 2: 9-bit for T1/T2, increasing by 1 every 2 tables)
std::vector<int> TagePredictor::generateTagWidths(int numTables) {
    std::vector<int> widths(numTables);
    for (int i = 0; i < numTables; i++) {
        widths[i] = 9 + (i / 2);
    }
    return widths;
}

TagePredictor::TagePredictor(int numTables, int tableSize, int bimodalSize, int minHist, int maxHist) :
    NUM_TABLES(numTables),
    TABLE_SIZE(tableSize), 
    BIMODAL_SIZE(bimodalSize), 
    MAX_HIST(maxHist),
    INDEX_BITS((int)log2(tableSize)),
    UBIT_RESET_CNT(256 * 1024), // for example, reset useful bits every 256K branches
    bimodalTable(BIMODAL_SIZE, 2), // initialized to "weakly taken"
    taggedTables(NUM_TABLES, std::vector<Entry>(TABLE_SIZE)),
    historyLengths(generateHistoryLengths(numTables, minHist, maxHist)),
    tagWidths(generateTagWidths(numTables)),
    globalHistory(MAX_HIST, false),
    pathHistory(0),
    branchCnt(0),
    resetMSB(true)
{
}

uint32_t TagePredictor::calculateIndex(uint32_t pc, int bank) {
    int histLen = historyLengths[bank];
    uint32_t hash = pc;
    for (int i = 0; i < histLen; i++) {
        hash ^= (globalHistory[i] << (i % 9)); // Simple XOR folding
    }
    hash ^= (pathHistory << bank);
    return hash % TABLE_SIZE;
}

uint32_t TagePredictor::calculateTag(uint32_t pc, int bank) {
    int histLen = historyLengths[bank];
    int width = tagWidths[bank]; // per-table tag width (9-bit for T1/T2, increasing)
    uint32_t tag = pc ^ (pc >> 4);
    for (int i = 0; i < histLen; i++) {
        tag ^= (globalHistory[i] << ((i * 7 + bank) % 10));
    }
    return tag & ((1 << width) - 1);
}

bool TagePredictor::predict(uint32_t pc) {
    provBank = -1; // -1 means we will use T0 at the end
    altBank = -1;

    // Search for "Longest Match" (Provider) and "Second Longest Match" (Alternate)
    for (int i = NUM_TABLES - 1; i >= 0; i--) { // From T7 (long) to T1 (short)
        uint32_t idx = calculateIndex(pc, i);
        uint32_t tag = calculateTag(pc, i);

        if (taggedTables[i][idx].tag == tag) {
            if (provBank == -1) {
                provBank = i;
                provIdx = idx;
            } else if (altBank == -1) {
                altBank = i;
                altIdx = idx;
                break;
            }
        }
    }

    // Get predictions
    if (provBank == -1) {
        provPred = (bimodalTable[pc % BIMODAL_SIZE] >= 2);
    } else {
        provPred = (taggedTables[provBank][provIdx].ctr >= 0);
    }   

    if (altBank == -1) {
        altPred = (bimodalTable[pc % BIMODAL_SIZE] >= 2);
    } else {
        altPred = (taggedTables[altBank][altIdx].ctr >= 0);
    }

    // If provider is new (u=0) and weak, use alternate prediction
    finalPred = provPred;  // Default to provider prediction
    if (provBank != -1) {
        Entry& e = taggedTables[provBank][provIdx];
        if (e.u == 0 && (e.ctr == 0 || e.ctr == -1)) {
            finalPred = altPred;  // Use alternate prediction for newly allocated entries
        }
    }

    return finalPred;
}

void TagePredictor::update(uint32_t pc, bool actual) {
    // Update provider
    if (provBank == -1) {
        // no provider, update bimodal
        int8_t& c = bimodalTable[pc % BIMODAL_SIZE];
        if (actual && c < 3) {
            c++;
        } else if (!actual && c > 0) {
            c--;
        }
    } else {
        // update provider entry
        Entry& e = taggedTables[provBank][provIdx];
        if (actual && e.ctr < 3) {
            e.ctr++;
        } else if (!actual && e.ctr > -4) {
            e.ctr--;
        }

        // update usefull bit
        if (finalPred != altPred) {
            if (finalPred == actual) {
                if (e.u < 3) e.u++;
            } else {
                if (e.u > 0) e.u--;
            }
        }
    }

    // Allocation: If mispredicted, try to allocate in longer history bank
    if (finalPred != actual && provBank < NUM_TABLES - 1) {
        // prefer shorter history with ~2x probability
        int allocBank = -1;
        for (int i = provBank + 1; i < NUM_TABLES; i++) {
            uint32_t idx = calculateIndex(pc, i);
            if (taggedTables[i][idx].u == 0) {
                if (allocBank == -1) {
                    allocBank = i;
                } else if (rand() % 3 == 0) {
                    allocBank = i;
                    break;
                } else {
                    break;
                }
            }
        }

        if (allocBank != -1) {
            uint32_t idx = calculateIndex(pc, allocBank);
            taggedTables[allocBank][idx].tag = calculateTag(pc, allocBank);
            taggedTables[allocBank][idx].ctr = (actual) ? 0 : -1;
            taggedTables[allocBank][idx].u = 0;
        } else {
            // Aging: no free entry found, decrement all useful bits
            for (int i = provBank + 1; i < NUM_TABLES; i++) {
                uint32_t idx = calculateIndex(pc, i);
                if (taggedTables[i][idx].u > 0) taggedTables[i][idx].u--;
            }
        }
    }

    // Update global and path history
    globalHistory.insert(globalHistory.begin(), actual);
    globalHistory.pop_back();
    // Use bit 2 of PC (bit 0 is always 0 for RISC-V 4-byte aligned instructions)
    pathHistory = ((pathHistory << 1) | ((pc >> 2) & 1)) & 0xFFFF; // 16-bit mask

    // Aging: every UBIT_RESET_CNT updates, reset all useful bits
    branchCnt++;

    if (branchCnt >= UBIT_RESET_CNT) {
        branchCnt = 0;
        for (int i = 0; i < NUM_TABLES; i++) {
            for (int j = 0; j < TABLE_SIZE; j++) {
                if (resetMSB) taggedTables[i][j].u &= 1; // clear MSB
                else taggedTables[i][j].u &= 2;          // clear LSB
            }
        }
        resetMSB = !resetMSB;
    }

}


