/*
 * Copyright 2024 Chair of EDA, Technical University of Munich
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

#include "models/common/ConfigurableMemoryModel/CacheInstance.h"

#include <iostream>

// TODO: remove
#include "models/common/ConfigurableMemoryModel/MemoryInstanceManager.h"

void
cmm::CacheInstance::broadcastInvalidation(uint64_t address)
{
    // invalidate other components
    // TODO: use `m_otherComponents` here, set by configuration
    for (CacheInstance& other : MemoryInstanceManager::instance()->caches())
    {
        if (&other != this) other.invalidate(address, m_tagMemory.lineSize());
    }
}
