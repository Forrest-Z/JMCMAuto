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

#include <memory>
#include <string>
#include <vector>

#include "Eigen/Dense"

#include "modules/prediction/proto/network_model.pb.h"

#include "modules/prediction/network/net_layer.h"
#include "modules/prediction/network/net_util.h"

#ifndef MODULES_PREDICTION_NETWORK_NET_MODEL_H_
#define MODULES_PREDICTION_NETWORK_NET_MODEL_H_

/**
 * @namespace jmc_auto::prediction::network
 * @brief jmc_auto::prediction::network
 */
namespace jmc_auto {
namespace prediction {
namespace network {

/**
 * @class NetModel
 * @brief NetModel is a base class for specific network model
 *        It contains a pure virtual function Run which must be implemented
 *        in derived class
 */
class NetModel {
 public:
  /**
   * @brief Constructor
   */
  NetModel() = default;

  /**
   * @brief Destructor
   */
  virtual ~NetModel() = default;

  /**
   * @brief Compute the model output from inputs
   * @param Inputs to a network
   * @param Output of a network will be returned
   */
  virtual void Run(const std::vector<Eigen::MatrixXf>& inputs,
                   Eigen::MatrixXf* output) const = 0;

  /**
   * @brief Set the internal state of a network model
   * @param A specified internal state in a vector of Eigen::MatrixXf
   */
  virtual void SetState(const std::vector<Eigen::MatrixXf>& states) {}

  /**
   * @brief Access to the internal state of a network model
   * @return Internal state in a vector of Eigen::MatrixXf of the model
   */
  virtual void State(std::vector<Eigen::MatrixXf>* states) const {}

  /**
   * @brief Set the internal state of a model
   * @param A specified internal state in a vector of Eigen::MatrixXf
   */
  virtual void ResetState() const {}

  /**
   * @brief Load network parameters from a protobuf message
   * @param NetParameter is a protobuf message
   * @return True if successfully loaded, otherwise False
   */
  bool LoadModel(const NetParameter& net_parameter);

  /**
   * @brief Shows the performance information of a network
   * @return Performance of a network model
   */
  std::string PerformanceString() const;

  /**
   * @brief Name of a network model
   * @return Name of a network model
   */
  const std::string& Name() const;

  /**
   * @brief Id of a network model
   * @return Id of a network model
   */
  int Id() const;

  /**
   * @brief Indicate the state of a network model
   * @return True of a network model is load successively, otherwise False.
   */
  bool IsOk() const;

 protected:
  std::vector<std::unique_ptr<Layer>> layers_;
  NetParameter net_parameter_;
  bool ok_ = false;
};

}  // namespace network
}  // namespace prediction
}  // namespace jmc_auto

#endif  // MODULES_PREDICTION_NETWORK_NET_MODEL_H_
