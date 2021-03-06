/******************************************************************************
 * Copyright 2017 The JmcAuto Authors. All Rights Reserved.
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

#include "modules/prediction/container/pose/pose_container.h"

#include <array>
#include "gtest/gtest.h"

#include "modules/localization/proto/localization.pb.h"

namespace jmc_auto {
namespace prediction {

using jmc_auto::localization::LocalizationEstimate;
using jmc_auto::localization::Pose;
using jmc_auto::perception::PerceptionObstacle;

class PoseContainerTest : public ::testing::Test {
 public:
  PoseContainerTest() = default;
  virtual ~PoseContainerTest() = default;

  void SetUp() override {}

 protected:
  void InitPose(LocalizationEstimate *localization);

 protected:
  PoseContainer pose_;

 private:
  std::array<double, 2> position_{{1.0, 1.5}};
  std::array<double, 2> velocity_{{2.0, 2.5}};
  double timestamp_ = 3.0;
};

void PoseContainerTest::InitPose(LocalizationEstimate *localization) {
  localization->mutable_pose()->mutable_position()->set_x(position_[0]);
  localization->mutable_pose()->mutable_position()->set_y(position_[1]);
  localization->mutable_pose()->mutable_linear_velocity()->set_x(velocity_[0]);
  localization->mutable_pose()->mutable_linear_velocity()->set_y(velocity_[1]);
  localization->mutable_header()->set_timestamp_sec(timestamp_);
}

TEST_F(PoseContainerTest, Insertion) {
  LocalizationEstimate localization;
  InitPose(&localization);

  pose_.Insert(localization);
  EXPECT_DOUBLE_EQ(pose_.GetTimestamp(), 3.0);

  PerceptionObstacle *obstacle = pose_.ToPerceptionObstacle();
  EXPECT_TRUE(obstacle != nullptr);
  EXPECT_TRUE(obstacle->has_position());
  EXPECT_TRUE(obstacle->has_velocity());
  EXPECT_DOUBLE_EQ(obstacle->position().x(), 1.0);
  EXPECT_DOUBLE_EQ(obstacle->position().y(), 1.5);
  EXPECT_DOUBLE_EQ(obstacle->velocity().x(), 2.0);
  EXPECT_DOUBLE_EQ(obstacle->velocity().y(), 2.5);
}

}  // namespace prediction
}  // namespace jmc_auto
