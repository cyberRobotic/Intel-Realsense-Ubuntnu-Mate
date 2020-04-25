// License: Apache 2.0. See   LICENSE file in root directory.'
// Copyright(c) 2017 Intel Corporation. All Rigths Reserved.

#include <librealsense2/rs.hpp>
#include <librealsense2/hpp/rs_internal.hpp>
#include <iostream>

int main()
{
  rs2::context ctx;
  std::cout <<"Hello from librealsense - " RS2_API_VERSION_STR << std::endl;
  std::cout <<"You have " ctx.query_devices().size() << " Realsense devices connected" << std::endl;
  
  return 0;
}
  
