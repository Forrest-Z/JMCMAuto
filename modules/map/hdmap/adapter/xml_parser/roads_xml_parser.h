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
#ifndef MODULES_MAP_HDMAP_ADAPTER_XML_PARSER_ROADS_XML_PARSER_H_
#define MODULES_MAP_HDMAP_ADAPTER_XML_PARSER_ROADS_XML_PARSER_H_

#include <string>
#include <unordered_map>
#include <vector>

#include "tinyxml2/tinyxml2.h"

#include "modules/map/hdmap/adapter/xml_parser/common_define.h"
#include "modules/map/hdmap/adapter/xml_parser/status.h"

namespace jmc_auto {
namespace hdmap {
namespace adapter {

class RoadsXmlParser {
 public:
  static Status Parse(const tinyxml2::XMLElement& xml_node,
                      std::vector<RoadInternal>* roads);
};

}  // namespace adapter
}  // namespace hdmap
}  // namespace jmc_auto

#endif  // MODULES_MAP_HDMAP_ADAPTER_XML_PARSER_ROADS_XML_PARSER_H_
