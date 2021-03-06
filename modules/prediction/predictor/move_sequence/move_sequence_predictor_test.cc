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

#include "modules/prediction/predictor/move_sequence/move_sequence_predictor.h"

#include <string>
#include <vector>

#include "gtest/gtest.h"

#include "modules/common/util/file.h"
#include "modules/map/hdmap/hdmap.h"
#include "modules/perception/proto/perception_obstacle.pb.h"
#include "modules/prediction/common/kml_map_based_test.h"
#include "modules/prediction/common/prediction_gflags.h"
#include "modules/prediction/container/obstacles/obstacle.h"
#include "modules/prediction/container/obstacles/obstacles_container.h"
#include "modules/prediction/evaluator/vehicle/mlp_evaluator.h"

namespace jmc_auto {
namespace prediction {

class MoveSequencePredictorTest : public KMLMapBasedTest {
 public:
  virtual void SetUp() {
    std::string file =
        "modules/prediction/testdata/single_perception_vehicle_onlane.pb.txt";
    jmc_auto::common::util::GetProtoFromFile(file, &perception_obstacles_);
  }

 protected:
  jmc_auto::perception::PerceptionObstacles perception_obstacles_;
};

TEST_F(MoveSequencePredictorTest, OnLaneCase) {
  EXPECT_DOUBLE_EQ(perception_obstacles_.header().timestamp_sec(),
                   1501183430.161906);
  jmc_auto::perception::PerceptionObstacle perception_obstacle =
      perception_obstacles_.perception_obstacle(0);
  EXPECT_EQ(perception_obstacle.id(), 1);
  MLPEvaluator mlp_evaluator;
  ObstaclesContainer container;
  container.Insert(perception_obstacles_);
  Obstacle* obstacle_ptr = container.GetObstacle(1);
  EXPECT_TRUE(obstacle_ptr != nullptr);
  mlp_evaluator.Evaluate(obstacle_ptr);
  MoveSequencePredictor predictor;
  predictor.Predict(obstacle_ptr);
  EXPECT_EQ(predictor.NumOfTrajectories(), 1);
}

TEST_F(MoveSequencePredictorTest, Polynomial) {
  EXPECT_DOUBLE_EQ(perception_obstacles_.header().timestamp_sec(),
                   1501183430.161906);
  jmc_auto::perception::PerceptionObstacle perception_obstacle =
      perception_obstacles_.perception_obstacle(0);
  EXPECT_EQ(perception_obstacle.id(), 1);
  MLPEvaluator mlp_evaluator;
  ObstaclesContainer container;
  container.Insert(perception_obstacles_);
  Obstacle* obstacle_ptr = container.GetObstacle(1);
  EXPECT_TRUE(obstacle_ptr != nullptr);
  mlp_evaluator.Evaluate(obstacle_ptr);
  MoveSequencePredictor predictor;
  const Feature& feature = obstacle_ptr->latest_feature();
  const LaneGraph& lane_graph = feature.lane().lane_graph();
  for (const auto& lane_sequence : lane_graph.lane_sequence()) {
    std::pair<double, double> lon_end_state;
    std::array<double, 5> lon_coefficients;
    bool ret_lon = predictor.GetLongitudinalPolynomial(
        *obstacle_ptr, lane_sequence, &lon_end_state, &lon_coefficients);
    EXPECT_TRUE(ret_lon);
    std::array<double, 6> lat_coefficients;
    bool ret_lat = predictor.GetLateralPolynomial(
        *obstacle_ptr, lane_sequence, 3.0, &lat_coefficients);
    EXPECT_TRUE(ret_lat);
  }
}

TEST_F(MoveSequencePredictorTest, Utils) {
  EXPECT_DOUBLE_EQ(perception_obstacles_.header().timestamp_sec(),
                   1501183430.161906);
  jmc_auto::perception::PerceptionObstacle perception_obstacle =
      perception_obstacles_.perception_obstacle(0);
  EXPECT_EQ(perception_obstacle.id(), 1);
  MLPEvaluator mlp_evaluator;
  ObstaclesContainer container;
  container.Insert(perception_obstacles_);
  Obstacle* obstacle_ptr = container.GetObstacle(1);
  EXPECT_TRUE(obstacle_ptr != nullptr);
  mlp_evaluator.Evaluate(obstacle_ptr);
  MoveSequencePredictor predictor;
  const Feature& feature = obstacle_ptr->latest_feature();
  const LaneGraph& lane_graph = feature.lane().lane_graph();
  for (const auto& lane_sequence : lane_graph.lane_sequence()) {
    double speed = predictor.ComputeTimeToLatEndConditionByVelocity(
        *obstacle_ptr, lane_sequence);
    EXPECT_GT(speed, 0.0);
  }
  std::vector<double> candidate_times;
  predictor.GenerateCandidateTimes(&candidate_times);
  EXPECT_GT(candidate_times.size(), 0);
}

}  // namespace prediction
}  // namespace jmc_auto
