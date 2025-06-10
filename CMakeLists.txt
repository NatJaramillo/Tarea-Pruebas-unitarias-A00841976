cmake_minimum_required(VERSION 3.10)
project(sonarqube_unit_test)

set(CMAKE_CXX_STANDARD 14)

include_directories(include)

add_library(math_utils src/math_utils.cpp)

add_executable(main src/main.cpp)
target_link_libraries(main math_utils)

enable_testing()
add_subdirectory(lib/googletest)
include_directories(lib/googletest/googletest/include)

add_executable(test_math test/test_math.cpp)
target_link_libraries(test_math gtest gtest_main math_utils)
add_test(NAME test_math COMMAND test_math)
