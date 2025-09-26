#include "models/Vicuna/PackUnpackLsuRegisters.h"

namespace Vicuna {

int PackUnpackLsuRegisters::getDelay(void) {
  auto const nFields = nf_ptr[getInstrIndex()] + 1;
  return nFields;
}

} // namespace Vicuna
