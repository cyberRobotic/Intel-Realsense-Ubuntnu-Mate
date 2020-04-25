```cpp
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
  
```
