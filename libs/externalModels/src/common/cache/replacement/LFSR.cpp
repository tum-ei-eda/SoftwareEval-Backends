#include "models/common/cache/replacement/LFSR.h"

#include <cassert>
#include <cstdint>

namespace replacement_strategy {

void LFSR::touch(uint32_t way) {
  uint8_t shift_in =
      ~(((shift_state & 0x80) >> 7) ^ ((shift_state & 0x08) >> 3) ^
        ((shift_state & 0x04) >> 2) ^ ((shift_state & 0x02) >> 1));
  shift_state = (shift_state << 1) | (shift_in & 0x01);
}

uint32_t LFSR::getVictim() { return (shift_state & 0x03); }

} // namespace replacement_strategy