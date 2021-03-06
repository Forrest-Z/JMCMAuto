/******************************************************************************
 * Copyright 2017 The jmc_auto Authors. All Rights Reserved.
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
 * @file path_time_heuristic_optimizer.h
 **/

#pragma once

#include <string>

#include "modules/planning/proto/dp_st_speed_config.pb.h"
#include "modules/planning/proto/planning_internal.pb.h"

#include "modules/planning/tasks/optimizers/speed_optimizer.h"

namespace jmc_auto {
namespace planning {

/**
 * @class PathTimeHeuristicOptimizer
 * @brief PathTimeHeuristicOptimizer does ST graph speed planning with dynamic
 * programming algorithm.
 */
class PathTimeHeuristicOptimizer : public SpeedOptimizer {
 public:
  explicit PathTimeHeuristicOptimizer(const TaskConfig& config);

 private:
  common::Status Process(const PathData& path_data,
                         const common::TrajectoryPoint& init_point,
                         SpeedData* const speed_data) override;

  bool SearchPathTimeGraph(SpeedData* speed_data) const;

 private:
  common::TrajectoryPoint init_point_;
  SLBoundary adc_sl_boundary_;
  SpeedHeuristicConfig speed_heuristic_config_;
  DpStSpeedConfig dp_st_speed_config_;
};

}  // namespace planning
}  // namespace jmc_auto
