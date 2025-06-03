cmake_minimum_required(VERSION 3.4.1)

find_package(OpenCV REQUIRED)

add_library(
    native-lib
    SHARED
    native-lib.cpp
    edge_processor.cpp
)

find_library(
    log-lib
    log
)

target_link_libraries(
    native-lib
    ${log-lib}
    ${OpenCV_LIBS}
)
