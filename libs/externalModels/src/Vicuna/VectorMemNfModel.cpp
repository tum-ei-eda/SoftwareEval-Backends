/*
 * Copyright 2023 Chair of EDA, Technical University of Munich
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *	 http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */

#include "models/Vicuna/VectorMemNfModel.h"
#include "models/Vicuna/VectorConfig.h"
#include <cstdint>

namespace Vicuna
{

int VectorMemNfModel::getDelay(void)
{
    auto const nRegisters = nf_ptr[getInstrIndex()] + 1;

    auto const cyclesPerRegister = vlen_ / VectorConfig::vMemWidth;
    // Extra buffer cycle
    return nRegisters * cyclesPerRegister;
}

} // namespace Vicuna
