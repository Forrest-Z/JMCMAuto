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

#ifndef MODULES_MONITOR_HARDWARE_CAN_ESDCAN_ESDCAN_UTILS_H_
#define MODULES_MONITOR_HARDWARE_CAN_ESDCAN_ESDCAN_UTILS_H_

#include "modules/monitor/hardware/can/esdcan/esdcan_test.h"

/**
 * @namespace jmc_auto::monitor::hw
 * @brief jmc_auto::monitor::hw
 */
namespace jmc_auto {
namespace monitor {
namespace hw {

void esdcan_print_if_status(int id, const CAN_IF_STATUS &if_status);

void esdcan_print_stats(const NTCAN_BUS_STATISTIC &stats);

void esdcan_print_ctrl_state(const NTCAN_CTRL_STATE &c_state);

void esdcan_print_bitrate(const NTCAN_BITRATE &bitrate);

}  // namespace hw
}  // namespace monitor
}  // namespace jmc_auto

#endif  // MODULES_MONITOR_HARDWARE_CAN_ESDCAN_ESDCAN_UTILS_H_
