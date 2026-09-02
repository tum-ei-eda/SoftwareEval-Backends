#ifndef COMMON_TAGE_PREDICTOR_H
#define COMMON_TAGE_PREDICTOR_H


#include <vector>
#include <cstdint>


class TagePredictor {

public:
    TagePredictor(int numTables, int tableSize, int bimodalSize, int minHist, int maxHist);

    bool predict(uint32_t pc);
    void update(uint32_t pc, bool actual);

private:
    struct Entry {
        Entry() : ctr(0), tag(0xFFFF), u(0) {}

        int8_t ctr; // 3-bit signed counter (-4 to 3)
        uint16_t tag; // 16-bit tag
        uint8_t u; // 2-bit useful bit
    };

    const int NUM_TABLES;
    const int TABLE_SIZE;
    const int BIMODAL_SIZE;
    const int MAX_HIST;
    const int INDEX_BITS;
    const int UBIT_RESET_CNT;

    std::vector<int8_t> bimodalTable;
    std::vector<std::vector<Entry>> taggedTables;
    const std::vector<int> historyLengths;
    const std::vector<int> tagWidths;

    std::vector<bool> globalHistory;
    uint32_t pathHistory;

    int branchCnt; // for aging
    bool resetMSB = true; // for alternating which bit to reset during aging
    int useAltOnNewAlloc = 8;

    // status variables
    int provBank, altBank;
    int provIdx, altIdx;
    bool provPred, altPred;
    bool finalPred;  // The actual prediction use

    // helper functions
    uint32_t calculateIndex(uint32_t pc, int bank);
    uint32_t calculateTag(uint32_t pc, int bank);

    std::vector<int> generateHistoryLengths(int numTables, int minHist, int maxHist);
    std::vector<int> generateTagWidths(int numTables);


};

#endif //COMMON_TAGE_PREDICTOR_H