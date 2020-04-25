# Cmake and make file for Intel realsenslib
This guide shows how to setup a cmake file for compling a librealsense project

'''javascript
#Set minmum requierd version of cmake
cmake_minimum_requierd(Version_3.1.0)
```
Name of the project will bee equal to the executable file name
```
project(name_on_cpp_file)
```
Find where the for package for librealsense is installed
```
find_package(realsense2 REQUIRED)
```
Enable version the version of C++11
```


