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

#include "modules/common/jmc_auto_app.h"
#include "modules/common/configs/config_gflags.h"
#include "modules/common/log.h"
#include "modules/common/util/file.h"
#include "modules/map/hdmap/hdmap_util.h"
#include "modules/routing/common/routing_gflags.h"
#include "modules/routing/proto/routing_config.pb.h"
#include "modules/routing/topo_creator/graph_creator.h"

int main(int argc, char **argv) {
  google::InitGoogleLogging(argv[0]);
  google::ParseCommandLineFlags(&argc, &argv, true);

  jmc_auto::routing::RoutingConfig routing_conf;

  CHECK(jmc_auto::common::util::GetProtoFromFile(FLAGS_routing_conf_file,
                                               &routing_conf))
      << "Unable to load routing conf file: " + FLAGS_routing_conf_file;

  AINFO << "Conf file: " << FLAGS_routing_conf_file << " is loaded.";

  const auto base_map = jmc_auto::hdmap::BaseMapFile();
  const auto routing_map = jmc_auto::hdmap::RoutingMapFile();
  jmc_auto::routing::GraphCreator creator(base_map, routing_map, &routing_conf);
  CHECK(creator.Create()) << "Create routing topo failed!";

  AINFO << "Create routing topo successfully from " << base_map << " to "
        << routing_map;
  return 0;
}
