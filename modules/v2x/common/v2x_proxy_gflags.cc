/******************************************************************************
 * Copyright 2018 The Apollo Authors. All Rights Reserved.
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
 * @file v2x_proxy_gflags.cc
 * @brief The gflags used by v2x proxy module
 */

#include "modules/v2x/common/v2x_proxy_gflags.h"

namespace apollo {
namespace v2x {

// IP & PORT
DEFINE_string(grpc_client_host, "127.0.0.1", "grpc client host ip");
DEFINE_string(grpc_server_host, "127.0.0.1", "grpc server host ip");
DEFINE_string(grpc_client_port, "50100", "grpc client port");
DEFINE_string(grpc_server_port, "50101", "grpc server port");
DEFINE_string(grpc_debug_server_port, "50102", "grpc server debug port");

// Other Flags
DEFINE_int64(x2v_trafficlight_timer_frequency, 10,
             "x2v trafficlight timer frequency");
DEFINE_bool(debug_flag, false, "debug flag");
DEFINE_int64(v2x_carstatus_timer_frequency, 10,
             "v2x carstatus timer frequency");
DEFINE_string(hdmap_file_name,
              "/apollo/modules/map/data/sunnyvale_big_loop/base_map.bin",
              "hdmap file name");
DEFINE_double(traffic_light_distance, 250.0, "traffic light distance");
DEFINE_double(heading_difference, 30.0 / 180.0, "max heading difference");
DEFINE_int64(list_size, 6, "size of list which stores the traffic light data");
DEFINE_int64(msg_timeout, 250, "timeout value which getting the msg from OBU");
DEFINE_int64(sim_sending_num, 10, "the max sending times");
DEFINE_bool(use_nearest_flag, true,
            "use the hdmap interface get_forward_nearest_signals_on_lane flag");
DEFINE_int64(spat_period, 150, "SPAT message periond");
DEFINE_double(check_time, 0.5, "SPAT message periond");
DEFINE_int64(rsu_whitelist_period, 3 * 1000, "get whitelist periond");  // 3s
DEFINE_string(rsu_whitelist_name,
              "/apollo/modules/v2x/conf/rsu_whitelist.txt",
              "file name for RSU whitelist");

}  // namespace v2x
}  // namespace apollo
