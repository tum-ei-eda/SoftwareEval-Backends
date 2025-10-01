/*
 * Copyright 2022 Chair of EDA, Technical University of Munich
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

#pragma once

#include <algorithm>
#include <cstdint>

#include "PerformanceModel.h"

namespace Vicuna {

class VectorSignaller : public ConnectorModel {
public:
  VectorSignaller(PerformanceModel *parent_)
      : ConnectorModel("VectorSignaller", parent_){};

  void setXifResultSignal(uint64_t xifResultSignal_) {
    xifResultSignal = xifResultSignal_;
  }
  void setXifResultSignalNext(uint64_t xifResultSignal_) {
    xifResultSignal = xifResultSignal_ + 1;
  }

  uint64_t getXifResultSignal(void) { return xifResultSignal; };
  uint64_t getXifResultSignalNext(void) { return xifResultSignal + 1; };

  void setVsetSignal(uint64_t vsetSignal_) { vsetSignal = vsetSignal_ - 1; }
  uint64_t getVsetSignal(void) { return vsetSignal; };

  void setMemArbiterSignal(uint64_t memArbiterSignal_) {
    memArbiterSignal = memArbiterSignal_;
  }
  uint64_t getMemArbiterSignal(void) { return memArbiterSignal; };

  void setLsuFreeSignal(uint64_t lsuFreeSignal_) {
    lsuFreeSignal = lsuFreeSignal_;
    xifResultSignal = lsuFreeSignal_;
  }
  uint64_t getLsuFreeSignal(void) { return lsuFreeSignal; };

  uint64_t getSyncSignal(void) {
    if (syncFlag) {
      // Signal was set already for same instruction, return buffered signal
      syncFlag = false;
      return syncSignal;
    }
    syncFlag = true;
    return xifResultSignal;
  }
  void setSyncSignal(uint64_t syncSignal_) {

    if (!syncFlag) {
      // XifResultSignal was not yet observed, buffer it and set flag
      syncSignal = xifResultSignal;
    }
    syncFlag = !syncFlag;
    xifResultSignal = syncSignal_;
  };

  auto setXifCommitSignal(uint64_t xifCommitSignal_) -> void {
    xifCommitSignal = xifCommitSignal_;
  }
  auto getXifCommitSignal(void) -> uint64_t { return xifCommitSignal; }

  auto setXifIssueSignal(uint64_t xifIssueSignal_) -> void {
    xifIssueSignal = xifIssueSignal_;
  }
  auto getXifIssueSignal(void) -> uint64_t { return xifIssueSignal; }

  auto getWbFreeSignal(void) -> uint64_t { return wbFreeSignal; }

  uint64_t getWbFreeSignalSync(void) {
    // if (wbSyncFlag) {
    //   // Signal was set already for same instruction, return buffered signal
    //   wbSyncFlag = false;
    //   return wbFreeSignalBuffer;
    // }
    // wbSyncFlag = true;
    return wbFreeSignal;
  }

  void setWbFreeSignalSync(uint64_t wbFreeSignal_) {
    // if (!wbSyncFlag) {
    //   // wbFreeSignal not yet observed, buffer it
    //   wbFreeSignalBuffer = wbFreeSignal;
    // }
    // wbSyncFlag = !wbSyncFlag;
    wbFreeSignal = wbFreeSignal_;
  }

private:
  uint64_t xifResultSignal = 0;
  uint64_t xifCommitSignal = 0;
  uint64_t xifIssueSignal = 0;

  uint64_t wbFreeSignal = 0;
  uint64_t wbFreeSignalBuffer = 0;

  uint64_t vsetSignal = 0;
  uint64_t memArbiterSignal = 0;
  uint64_t lsuFreeSignal = 0;
  uint64_t syncSignal = 0;

  bool syncFlag = false;
  bool wbSyncFlag = false;
};

} // namespace Vicuna
