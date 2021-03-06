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

#ifndef MODULES_DREAMVIEW_BACKEND_HMI_VEHICLE_MANAGER_H_
#define MODULES_DREAMVIEW_BACKEND_HMI_VEHICLE_MANAGER_H_

#include <string>

#include "modules/common/macro.h"
#include "modules/dreamview/proto/hmi_config.pb.h"

/**
 * @namespace jmc_auto::dreamview
 * @brief jmc_auto::dreamview
 */
namespace jmc_auto {
namespace dreamview {

class VehicleManager {
 public:
  bool UseVehicle(const std::string &vehicle_data_path);

 private:
  VehicleData vehicle_data_;

  DECLARE_SINGLETON(VehicleManager);
};

}  // namespace dreamview
}  // namespace jmc_auto

#endif  // MODULES_DREAMVIEW_BACKEND_HMI_VEHICLE_MANAGER_H_
