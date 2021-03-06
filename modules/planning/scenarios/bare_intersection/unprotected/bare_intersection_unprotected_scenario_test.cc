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

#include "modules/planning/scenarios/bare_intersection/unprotected/bare_intersection_unprotected_scenario.h"

#include "gtest/gtest.h"

#include "cyber/common/file.h"
#include "cyber/common/log.h"
#include "modules/planning/common/planning_gflags.h"

namespace jmc_auto {
namespace planning {
namespace scenario {
namespace bare_intersection {

class BareIntersectionUnprotectedScenarioTest : public ::testing::Test {
 public:
  virtual void SetUp() {}

 protected:
  std::unique_ptr<BareIntersectionUnprotectedScenario> scenario_;
};

TEST_F(BareIntersectionUnprotectedScenarioTest, Init) {
  FLAGS_scenario_bare_intersection_unprotected_config_file =
      "/jmc_auto/modules/planning/conf/"
      "scenario/bare_intersection_unprotected_config.pb.txt";

  ScenarioConfig config;
  EXPECT_TRUE(jmc_auto::cyber::common::GetProtoFromFile(
      FLAGS_scenario_bare_intersection_unprotected_config_file, &config));

  ScenarioContext context;
  scenario_.reset(new BareIntersectionUnprotectedScenario(config, &context));
  EXPECT_EQ(scenario_->scenario_type(),
            ScenarioConfig::BARE_INTERSECTION_UNPROTECTED);
}

}  // namespace bare_intersection
}  // namespace scenario
}  // namespace planning
}  // namespace jmc_auto
