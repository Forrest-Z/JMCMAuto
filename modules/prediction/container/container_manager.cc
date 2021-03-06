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

#include "modules/prediction/container/container_manager.h"

#include "modules/common/log.h"
#include "modules/prediction/container/obstacles/obstacles_container.h"
#include "modules/prediction/container/pose/pose_container.h"
#include "modules/prediction/container/adc_trajectory/adc_trajectory_container.h"

namespace jmc_auto {
namespace prediction {

using jmc_auto::common::adapter::AdapterConfig;
using jmc_auto::common::adapter::AdapterManagerConfig;

ContainerManager::ContainerManager() {}

void ContainerManager::Init(const AdapterManagerConfig& config) {
  config_.CopyFrom(config);
  RegisterContainers();
}

void ContainerManager::RegisterContainers() {
  for (const auto& adapter_config : config_.config()) {
    if (adapter_config.has_type() &&
        (adapter_config.mode() == AdapterConfig::RECEIVE_ONLY ||
         adapter_config.mode() == AdapterConfig::DUPLEX)) {
      RegisterContainer(adapter_config.type());
    }
  }
}

Container* ContainerManager::GetContainer(
    const common::adapter::AdapterConfig::MessageType& type) {
  if (containers_.find(type) != containers_.end()) {
    return containers_[type].get();
  } else {
    return nullptr;
  }
}

std::unique_ptr<Container> ContainerManager::CreateContainer(
    const common::adapter::AdapterConfig::MessageType& type) {
  std::unique_ptr<Container> container_ptr(nullptr);
  if (type == AdapterConfig::PERCEPTION_OBSTACLES) {
    container_ptr.reset(new ObstaclesContainer());
  } else if (type == AdapterConfig::LOCALIZATION) {
    container_ptr.reset(new PoseContainer());
  } else if (type == AdapterConfig::PLANNING_TRAJECTORY) {
    container_ptr.reset(new ADCTrajectoryContainer());
  }
  return container_ptr;
}

void ContainerManager::RegisterContainer(
    const common::adapter::AdapterConfig::MessageType& type) {
  containers_[type] = CreateContainer(type);
  AINFO << "Container [" << type << "] is registered.";
}

}  // namespace prediction
}  // namespace jmc_auto
