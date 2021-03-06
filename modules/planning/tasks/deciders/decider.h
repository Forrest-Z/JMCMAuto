/******************************************************************************
 * Copyright 2018 The jmc_auto Authors. All Rights Reserved.
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 * http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 *****************************************************************************/

/**
 * @file
 **/

#pragma once

#include "modules/common/status/status.h"
#include "modules/planning/common/frame.h"
#include "modules/planning/tasks/task.h"

namespace jmc_auto {
namespace planning {

class Decider : public Task {
 public:
  explicit Decider(const TaskConfig& config);
  virtual ~Decider() = default;
  jmc_auto::common::Status Execute(
      Frame* frame, ReferenceLineInfo* reference_line_info) override;

  jmc_auto::common::Status Execute(Frame* frame) override;

 protected:
  virtual jmc_auto::common::Status Process(
      Frame* frame, ReferenceLineInfo* reference_line_info) {
    return jmc_auto::common::Status::OK();
  }

  virtual jmc_auto::common::Status Process(Frame* frame) {
    return jmc_auto::common::Status::OK();
  }
};

}  // namespace planning
}  // namespace jmc_auto
