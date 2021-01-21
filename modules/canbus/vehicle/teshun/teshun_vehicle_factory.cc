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

#include "modules/canbus/vehicle/teshun/teshun_vehicle_factory.h"

#include "modules/canbus/vehicle/teshun/teshun_controller.h"
#include "modules/canbus/vehicle/teshun/teshun_message_manager.h"
#include "modules/common/log.h"
#include "modules/common/util/util.h"

namespace jmc_auto {
namespace canbus {

std::unique_ptr<VehicleController>
TeshunVehicleFactory::CreateVehicleController() {
  return std::unique_ptr<VehicleController>(new teshun::TeshunController());
}

std::unique_ptr<MessageManager<::jmc_auto::canbus::ChassisDetail>>
TeshunVehicleFactory::CreateMessageManager() {
  return std::unique_ptr<MessageManager<::jmc_auto::canbus::ChassisDetail>>(
	new teshun::TeshunMessageManager());
}

}  // namespace canbus
}  // namespace jmc_auto
