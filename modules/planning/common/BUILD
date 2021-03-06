load("//tools:cpplint.bzl", "cpplint")

package(default_visibility = ["//visibility:public"])

cc_library(
    name = "indexed_list",
    hdrs = ["indexed_list.h"],
    copts = [
        "-DMODULE_NAME=\\\"planning\\\"",
    ],
    deps = [
        "//modules/common/util:map_util",
        "@boost",
    ],
)

cc_library(
    name = "indexed_queue",
    hdrs = ["indexed_queue.h"],
    copts = [
        "-DMODULE_NAME=\\\"planning\\\"",
    ],
    deps = [
        "//modules/common/util:map_util",
    ],
)

cc_library(
    name = "obstacle",
    srcs = ["obstacle.cc"],
    hdrs = ["obstacle.h"],
    copts = [
        "-DMODULE_NAME=\\\"planning\\\"",
    ],
    deps = [
        ":indexed_list",
        "//modules/common/configs:vehicle_config_helper",
        "//modules/common/util:map_util",
        "//modules/planning/common/speed:st_boundary",
        "//modules/planning/proto:planning_proto",
        "//modules/planning/reference_line",
    ],
)

cc_library(
    name = "obstacle_blocking_analyzer",
    srcs = ["obstacle_blocking_analyzer.cc"],
    hdrs = ["obstacle_blocking_analyzer.h"],
    copts = [
        "-DMODULE_NAME=\\\"planning\\\"",
    ],
    deps = [
        ":frame",
        "//modules/common/configs:vehicle_config_helper",
        "//modules/planning/reference_line",
    ],
)

cc_library(
    name = "path_boundary",
    srcs = ["path_boundary.cc"],
    hdrs = ["path_boundary.h"],
)

cc_library(
    name = "planning_context",
    srcs = ["planning_context.cc"],
    hdrs = ["planning_context.h"],
    copts = [
        "-DMODULE_NAME=\\\"planning\\\"",
    ],
    deps = [
        "//modules/common:macros",
        "//modules/planning/common/path:path_data",
        "//modules/planning/proto:planning_status_proto",
        "@eigen",
    ],
)

cc_library(
    name = "path_decision",
    srcs = ["path_decision.cc"],
    hdrs = ["path_decision.h"],
    copts = [
        "-DMODULE_NAME=\\\"planning\\\"",
    ],
    deps = [
        ":obstacle",
        "//modules/planning/reference_line",
    ],
)

cc_library(
    name = "planning_gflags",
    srcs = ["planning_gflags.cc"],
    hdrs = ["planning_gflags.h"],
    copts = [
        "-DMODULE_NAME=\\\"planning\\\"",
    ],
    deps = [
        "//external:gflags",
    ],
)

cc_library(
    name = "reference_line_info",
    srcs = ["reference_line_info.cc"],
    hdrs = ["reference_line_info.h"],
    copts = [
        "-DMODULE_NAME=\\\"planning\\\"",
    ],
    deps = [
        ":ego_info",
        ":path_boundary",
        ":path_decision",
        ":planning_gflags",
        ":st_graph_data",
        "//modules/common:log",
        "//modules/planning/common:planning_thread_pool",
        "//modules/common/proto:pnc_point_proto",
        "//modules/common/util:point_factory",
        "//modules/common/vehicle_state:vehicle_state_provider",
        "//modules/map/pnc_map",
        "//modules/map/proto:map_proto",
        "//modules/planning/common/path:path_data",
        "//modules/planning/common/speed:speed_data",
        "//modules/planning/common/trajectory:discretized_trajectory",
        "//modules/planning/common/trajectory:publishable_trajectory",
        "//modules/planning/proto:lattice_structure_proto",
        "//modules/planning/reference_line",
        "@eigen",
    ],
)


cc_library(
    name = "speed_profile_generator",
    srcs = ["speed_profile_generator.cc"],
    hdrs = ["speed_profile_generator.h"],
    copts = [
        "-DMODULE_NAME=\\\"planning\\\"",
    ],
    deps = [
        ":frame",
        ":reference_line_info",
        "//modules/common/proto:pnc_point_proto",
        "//modules/planning/common/speed:speed_data",
        "//modules/planning/math/curve1d",
        "//modules/planning/math/curve1d:polynomial_curve1d",
        "//modules/planning/math/curve1d:quartic_polynomial_curve1d",
        "//modules/planning/math/curve1d:quintic_polynomial_curve1d",
        "//modules/planning/math/piecewise_jerk:piecewise_jerk_speed_problem",
        "//modules/planning/proto:planning_config_proto",
    ],
)


cc_library(
    name = "local_view",
    hdrs = ["local_view.h"],
    copts = [
        "-DMODULE_NAME=\\\"planning\\\"",
    ],
    deps = [
        "//modules/localization/proto:localization_proto",
        "//modules/map/relative_map/proto:navigation_proto",
        "//modules/perception/proto:perception_proto",
        "//modules/planning/proto:planning_proto",
        "//modules/prediction/proto:prediction_proto",
    ],
)

cc_library(
    name = "frame",
    srcs = ["frame.cc"],
    hdrs = ["frame.h"],
    copts = [
        "-DMODULE_NAME=\\\"planning\\\"",
    ],
    deps = [
        ":indexed_queue",
        ":local_view",
        ":obstacle",
        ":open_space_info",
        ":reference_line_info",
        "//modules/common:log",
        "//modules/common:macros",
        "//modules/common/configs:vehicle_config_helper",
        "//modules/common/vehicle_state:vehicle_state_provider",
        "//modules/map/hdmap:hdmap_util",
        "//modules/map/pnc_map",
        "//modules/planning/common/trajectory:discretized_trajectory",
        "//modules/planning/common/trajectory:publishable_trajectory",
        "//modules/planning/common/util:util_lib",
        "//modules/planning/proto:planning_config_proto",
        "//modules/planning/proto:planning_proto",
        "//modules/planning/reference_line:reference_line_provider",
        "@eigen",
    ],
)


cc_library(
    name = "history",
    srcs = ["history.cc"],
    hdrs = ["history.h"],
    copts = [
        "-DMODULE_NAME=\\\"planning\\\"",
    ],
    deps = [
        ":planning_gflags",
        "//modules/common:log",
        "//modules/common:macros",
        "//modules/planning/proto:decision_proto",
        "//modules/planning/proto:planning_proto",
        "@eigen",
    ],
)

cc_library(
    name = "speed_limit",
    srcs = ["speed_limit.cc"],
    hdrs = ["speed_limit.h"],
    copts = [
        "-DMODULE_NAME=\\\"planning\\\"",
    ],
    deps = [
        "//modules/common/math",
        "//modules/planning/proto:planning_proto",
    ],
)


cc_library(
    name = "ego_info",
    srcs = ["ego_info.cc"],
    hdrs = ["ego_info.h"],
    copts = [
        "-DMODULE_NAME=\\\"planning\\\"",
    ],
    deps = [
        ":obstacle",
        "//modules/common:macros",
        "//modules/common:log",
        "//modules/common/configs:vehicle_config_helper",
        "//modules/common/configs/proto:vehicle_config_proto",
        "//modules/common/math:geometry",
        "//modules/common/vehicle_state/proto:vehicle_state_proto",
        "//modules/planning/reference_line",
        "@eigen",
    ],
)

cc_library(
    name = "planning_common",
    copts = [
        "-DMODULE_NAME=\\\"planning\\\"",
    ],
    deps = [
        ":ego_info",
        ":frame",
        ":planning_gflags",
        ":speed_limit",
        ":st_graph_data",
        "//modules/common:log",
        "//modules/localization/common:localization_common",
        "//modules/localization/proto:localization_proto",
        "@eigen",
    ],
)

cc_library(
    name = "trajectory_stitcher",
    srcs = ["trajectory_stitcher.cc"],
    hdrs = ["trajectory_stitcher.h"],
    deps = [
        "//modules/common:log",
        "//modules/common/proto:pnc_point_proto",
        "//modules/common/vehicle_model",
        "//modules/planning/common:planning_gflags",
        "//modules/planning/common/trajectory:publishable_trajectory",
        "//modules/planning/reference_line",
    ],
)

cc_library(
    name = "open_space_info",
    srcs = ["open_space_info.cc"],
    hdrs = ["open_space_info.h"],
    deps = [
        "//modules/common:log",
        "//modules/common/configs:vehicle_config_helper",
        "//modules/common/vehicle_state/proto:vehicle_state_proto",
        "//modules/map/hdmap:hdmap_util",
        "//modules/map/pnc_map",
        "//modules/planning/common:indexed_queue",
        "//modules/planning/common:obstacle",
        "//modules/planning/common:planning_gflags",
        "//modules/planning/common/trajectory:discretized_trajectory",
        "//modules/planning/common/trajectory:publishable_trajectory",
        "@eigen",
    ],
)


cc_library(
    name = "st_graph_data",
    srcs = ["st_graph_data.cc"],
    hdrs = ["st_graph_data.h"],
    copts = ["-DMODULE_NAME=\\\"planning\\\""],
    deps = [
        ":planning_gflags",
        ":speed_limit",
        "//modules/planning/common/speed:st_boundary",
    ],
)


cc_library(
    name = "planning_thread_pool",
    srcs = [
        "planning_thread_pool.cc",
    ],
    hdrs = [
        "planning_thread_pool.h",
    ],
    deps = [
        ":planning_gflags",
        "//modules/common:macro",
        "//modules/common/util:ctpl_stl",
    ],
)

cpplint()
