cmake_minimum_required(VERSION 3.10)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
set(CMAKE_CXX_EXTENSIONS OFF)

project(Algorithms-cpp)
                           
add_executable(Algorithms-cpp main.cpp Account.cpp)
target_include_directories(Algorithms-cpp PUBLIC "C:\\boost_1_87_0")

add_executable(LinkedList LinkedList.cpp)
target_include_directories(LinkedList PUBLIC "${CMAKE_SOURCE_DIR}")
