/******************************************************************************
 * Copyright 2019 The jmc_auto Authors. All Rights Reserved.
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

#include "modules/planning/proto/planning_config.pb.h"

#include "modules/planning/scenarios/stage.h"
#include "modules/planning/scenarios/yield_sign/yield_sign_scenario.h"

namespace jmc_auto {
namespace planning {
namespace scenario {
namespace yield_sign {

struct YieldSignContext;

class YieldSignStageCreep : public Stage {
 public:
  explicit YieldSignStageCreep(const ScenarioConfig::StageConfig& config)
      : Stage(config) {}

 private:
  Stage::StageStatus Process(const common::TrajectoryPoint& planning_init_point,
                             Frame* frame) override;

  YieldSignContext* GetContext() {
    return Stage::GetContextAs<YieldSignContext>();
  }

 private:
  Stage::StageStatus FinishStage();

 private:
  ScenarioYieldSignConfig scenario_config_;
};

}  // namespace yield_sign
}  // namespace scenario
}  // namespace planning
}  // namespace jmc_auto
