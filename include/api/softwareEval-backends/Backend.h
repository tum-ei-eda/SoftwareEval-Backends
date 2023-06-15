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

#ifndef SWEVAL_BACKENDS_BACKEND_H
#define SWEVAL_BACKENDS_BACKEND_H

#include "Channel.h"

class Backend
{
 public:
  Backend(){};
  ~Backend()=default;

  virtual void connectChannel(Channel*)=0;
  virtual void execute(void)=0;
  virtual void finalize(void)=0;
  
};

#endif //SWEVAL_BACKENDS_BACKEND_H
