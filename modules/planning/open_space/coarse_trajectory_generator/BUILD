load("//tools:cpplint.bzl", "cpplint")

package(default_visibility = ["//visibility:public"])

cc_library(
    name = "node3d",
    srcs = ["node3d.cc"],
    hdrs = ["node3d.h"],
    copts = ["-DMODULE_NAME=\\\"planning\\\""],
    deps = [
        "//modules/common:log",
        "//modules/common/math",
        "//modules/planning/common:obstacle",
        "//modules/planning/constraint_checker:collision_checker",
        "//modules/planning/proto:planner_open_space_config_proto",
    ],
)

cc_library(
    name = "reeds_shepp_path",
    srcs = ["reeds_shepp_path.cc"],
    hdrs = ["reeds_shepp_path.h"],
    copts = [
        "-DMODULE_NAME=\\\"planning\\\"",
        "-fopenmp",
    ],
    deps = [
        "//modules/common:log",
        "//modules/common/configs:vehicle_config_helper",
        "//modules/common/math",
        "//modules/planning/common:planning_gflags",
        "//modules/planning/open_space/coarse_trajectory_generator:node3d",
        "//modules/planning/proto:planner_open_space_config_proto",
        "@adolc",
    ],
)

cc_library(
    name = "grid_search",
    srcs = ["grid_search.cc"],
    hdrs = ["grid_search.h"],
    copts = ["-DMODULE_NAME=\\\"planning\\\""],
    deps = [
        "//modules/common:log",
        "//modules/common/math",
        "//modules/planning/proto:planner_open_space_config_proto",
        "@com_google_absl//absl/strings",
    ],
)

cc_library(
    name = "open_space_utils",
    copts = ["-DMODULE_NAME=\\\"planning\\\""],
    deps = [
        "//modules/planning/open_space/coarse_trajectory_generator:grid_search",
        "//modules/planning/open_space/coarse_trajectory_generator:node3d",
        "//modules/planning/open_space/coarse_trajectory_generator:reeds_shepp_path",
    ],
)

cc_library(
    name = "hybrid_a_star",
    srcs = ["hybrid_a_star.cc"],
    hdrs = ["hybrid_a_star.h"],
    copts = ["-DMODULE_NAME=\\\"planning\\\""],
    deps = [
        ":open_space_utils",
        "//modules/common:log",
        "//modules/common/configs:vehicle_config_helper",
        "//modules/planning/common:obstacle",
        "//modules/planning/common:planning_gflags",
        "//modules/planning/math/piecewise_jerk:piecewise_jerk_speed_problem",
        "//modules/planning/proto:planner_open_space_config_proto",
    ],
)

cpplint()
