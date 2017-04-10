cmake_minimum_required(VERSION 3.6)
project(client_application)

set(CMAKE_CXX_STANDARD 11)

set(SOURCE_FILES logger.cpp logger.h main.cpp preprocessor.cpp preprocessor.h fpga.cpp fpga.h client.cpp client.h types.h postprocessor.cpp postprocessor.h)
add_executable(client_application ${SOURCE_FILES})