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

#include "modules/planning/tasks/optimizers/open_space_trajectory_generation/open_space_trajectory_optimizer.h"

#include "gtest/gtest.h"
#include "modules/planning/proto/open_space_trajectory_provider_config.pb.h"

namespace jmc_auto {
namespace planning {
class OpenSpaceTrajectoryOptimizerTest : public ::testing::Test {
 public:
  virtual void SetUp() {
    OpenSpaceTrajectoryOptimizer open_space_trajectory_optimizer(config);
  }

 protected:
  OpenSpaceTrajectoryOptimizerConfig config;
};

}  // namespace planning
}  // namespace jmc_auto
