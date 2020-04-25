# Cmake and make file for Intel realsenslib
This guide shows how to setup a cmake file for making a make file for a librealsense project.\
Name the file CMakeLists.txt and copy the following code

```cmake
# Minimum requier version of cmake
cmake_minimum_required(VERSION 3.1.0)

# Name of the project
project(project_name)

# Find where the package for librealsense is installed
find_package(realsense2  REQUIERD)

# Choose c++ standard, librealsense use c++11
set(CMAKE_CXX_STANDARD_11)
set(CMAKE_CXX_REQUIERD TRUE)

# Point to all the source files in the project 
# Add the application surces to the target
add_executable($(PROJECT_NAME) choose alle the project files (cpp files) within the project)
```

Now you are ready to use cmake to make a Make file with the follwing commands with in the same folder
```
cmake .
make
```

It has been made an excutable files with the name of the project. \
Example project_name.o

