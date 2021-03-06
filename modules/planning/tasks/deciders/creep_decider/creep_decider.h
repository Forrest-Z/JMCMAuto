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

//#include "cyber/common/macros.h"
#include "modules/common/macro.h"

#include "modules/planning/proto/creep_decider_config.pb.h"

#include "modules/map/pnc_map/path.h"
#include "modules/planning/common/frame.h"
#include "modules/planning/common/reference_line_info.h"
#include "modules/planning/tasks/deciders/decider.h"

namespace jmc_auto {
namespace planning {

class CreepDecider : public Decider {
 public:
  explicit CreepDecider(const TaskConfig& config);

  jmc_auto::common::Status Process(
      Frame* frame, ReferenceLineInfo* reference_line_info) override;

  bool CheckCreepDone(const Frame& frame,
                      const ReferenceLineInfo& reference_line_info,
                      const double stop_sign_overlap_end_s,
                      const double wait_time_sec, const double timeout_sec);

  double FindCreepDistance(const Frame& frame,
                           const ReferenceLineInfo& reference_line_info);

 private:
  static constexpr const char* CREEP_VO_ID_PREFIX = "CREEP_";
  static uint32_t creep_clear_counter_;
  common::TrajectoryPoint adc_planning_start_point_;
  hdmap::Lane curr_lane_;
};

}  // namespace planning
}  // namespace jmc_auto
