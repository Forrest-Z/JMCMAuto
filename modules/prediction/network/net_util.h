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

/**
 * @file util.h
 * @brief Define activation functions for neural network
 */

#ifndef MODULES_PREDICTION_NETWORK_NET_UTIL_H_
#define MODULES_PREDICTION_NETWORK_NET_UTIL_H_

#include <functional>
#include <string>

#include "Eigen/Dense"

#include "modules/prediction/proto/network_layers.pb.h"

/**
 * @namespace jmc_auto::prediction::network
 * @brief jmc_auto::prediction::network
 */
namespace jmc_auto {
namespace prediction {
namespace network {

/**
 * @brief sigmoid function:
 *        f(x) = 1 / (1 + exp(-x))
 */
float sigmoid(const float x);

/**
 * @brief hyperbolic tangent function:
 *        f(x) = (1 + exp(-2x)) / (1 - exp(-2x))
 */
float tanh(const float x);

/**
 * @brief linear function:
 *        f(x) = x
 */
float linear(const float x);

/**
 * @brief "hard" sigmoid function:
 *               | 0.0         x in (-oo, 0)
 *        f(x) = | 0.2x + 0.5  x in [0, 2.5]
 *               | 1.0         x in (2.5, +oo)
 */
float hard_sigmoid(const float x);

/**
 * @brief relu function:
 *               | 0.0      x in (-oo, 0.0)
 *        f(x) = |
 *               | x        x in [0.0, +oo)
 */
float relu(const float x);

/**
 * @brief translate a string into a network activation function
 * @param string
 * @return activation function map to the string
 */
std::function<float(float)> serialize_to_function(const std::string& str);

/**
 * @brief load matrix value from a protobuf message
 * @param protobuf message in the form of TensorParameter
 * @param Eigen::MatrixXf will be returned
 * @return True if load data successively, otherwise False
 */
bool LoadTensor(const TensorParameter& tensor_pb, Eigen::MatrixXf* matrix);

/**
 * @brief load vector value from a protobuf message
 * @param protobuf message in the form of TensorParameter
 * @param Eigen::VectorXf will be returned
 * @return True if load data successively, otherwise False
 */
bool LoadTensor(const TensorParameter& tensor_pb, Eigen::VectorXf* vector);

}  // namespace network
}  // namespace prediction
}  // namespace jmc_auto

#endif  // MODULES_PREDICTION_NETWORK_NET_UTIL_H_
