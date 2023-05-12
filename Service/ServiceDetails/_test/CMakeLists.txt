cmake_minimum_required(VERSION 3.5)

project(serviceTest)

add_executable(serviceTest main.cpp serviceTest.cpp )

find_package(Qt5Test REQUIRED)
target_link_libraries(serviceTest PRIVATE Qt${QT_VERSION_MAJOR}::Core)
include_directories("${CMAKE_SOURCE_DIR}/googletest/googletest/include")
include_directories("${CMAKE_SOURCE_DIR}/googletest/googlemock/include")
include_directories("${CMAKE_SOURCE_DIR}/ServiceDetails")

target_link_directories(serviceTest PUBLIC googletest QtTest ServiceDetails)
target_link_libraries(serviceTest PUBLIC ServiceDetails)
#target_link_libraries(serviceTest PUBLIC QtTest)   //if you include QtTest libraries then creating Qtest Error
target_link_libraries(serviceTest PUBLIC
    ServiceDetails
    gtest
    gmock
    Qt5::Test)

