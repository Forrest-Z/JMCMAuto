/* Copyright 2017 The JmcAuto Authors. All Rights Reserved.

Licensed under the Apache License, Version 2.0 (the "License");
you may not use this file except in compliance with the License.
You may obtain a copy of the License at

    http://www.apache.org/licenses/LICENSE-2.0

Unless required by applicable law or agreed to in writing, software
distributed under the License is distributed on an "AS IS" BASIS,
WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
See the License for the specific language governing permissions and
limitations under the License.
=========================================================================*/
#ifndef MODULES_MAP_HDMAP_ADAPTER_OPENDRIVE_ADAPTER_H_
#define MODULES_MAP_HDMAP_ADAPTER_OPENDRIVE_ADAPTER_H_

#include <fstream>
#include <iostream>
#include <string>

#include "modules/map/proto/map.pb.h"

#include "modules/map/hdmap/adapter/coordinate_convert_tool.h"
#include "modules/map/hdmap/adapter/xml_parser/common_define.h"
#include "modules/map/hdmap/adapter/xml_parser/header_xml_parser.h"
#include "modules/map/hdmap/adapter/xml_parser/junctions_xml_parser.h"
#include "modules/map/hdmap/adapter/xml_parser/lanes_xml_parser.h"
#include "modules/map/hdmap/adapter/xml_parser/objects_xml_parser.h"
#include "modules/map/hdmap/adapter/xml_parser/roads_xml_parser.h"
#include "modules/map/hdmap/adapter/xml_parser/signals_xml_parser.h"

namespace jmc_auto {
namespace hdmap {
namespace adapter {

class OpendriveAdapter {
 public:
  static bool LoadData(const std::string& filename, jmc_auto::hdmap::Map* pb_map);
};

}  // namespace adapter
}  // namespace hdmap
}  // namespace jmc_auto

#endif  // MODULES_MAP_HDMAP_ADAPTER_OPENDRIVE_ADAPTER_H_
