cmake_minimum_required(VERSION 3.10)


project(Algorithms-cpp)
       
# TARGETS
#arget_include_directories(test_Account PUBLIC "C:\\boost_1_87_0")

#add_executable(LinkedList LinkedList.cpp)
#target_include_directories(LinkedList PUBLIC "${CMAKE_SOURCE_DIR}")

#add_executable(BookExamples BookExamples.cpp)
#target_include_directories(BookExamples PUBLIC "${CMAKE_SOURCE_DIR}")

#add_executable(Sorting Sorting.cpp)
#arget_include_directories(Sorting PUBLIC "${CMAKE_SOURCE_DIR}")


# TESTS
list(APPEND CMAKE_PREFIX_PATH "C:/Catch2")
find_package(Catch2 REQUIRED)

add_executable(test_String2 test_String2.cpp String2.cpp)
target_include_directories(test_String2 PUBLIC "${CMAKE_SOURCE_DIR}")
target_link_libraries(test_String2 PRIVATE Catch2::Catch2WithMain)

add_executable(test_Account test_Account.cpp Account.cpp)
target_include_directories(test_Account PUBLIC "${CMAKE_SOURCE_DIR}")
target_link_libraries(test_Account PRIVATE Catch2::Catch2WithMain)

add_executable(test_MergeSort test_MergeSort.cpp)
target_include_directories(test_MergeSort PUBLIC "${CMAKE_SOURCE_DIR}")
target_link_libraries(test_MergeSort PRIVATE Catch2::Catch2WithMain)

add_executable(test_LinkedList test_LinkedList.cpp)
target_include_directories(test_LinkedList PUBLIC "${CMAKE_SOURCE_DIR}")
target_link_libraries(test_LinkedList PRIVATE Catch2::Catch2WithMain)

add_executable(test_Graph_DFS test_Graph_DFS.cpp)
target_include_directories(test_Graph_DFS PUBLIC "${CMAKE_SOURCE_DIR}")
target_link_libraries(test_Graph_DFS PRIVATE Catch2::Catch2WithMain)

add_executable(test_Graph_hasPath test_Graph_hasPath.cpp)
target_include_directories(test_Graph_hasPath PUBLIC "${CMAKE_SOURCE_DIR}")
target_link_libraries(test_Graph_hasPath PRIVATE Catch2::Catch2WithMain)

add_executable(test_QuickSort test_QuickSort.cpp)
target_include_directories(test_QuickSort PUBLIC "${CMAKE_SOURCE_DIR}")
target_link_libraries(test_QuickSort PRIVATE Catch2::Catch2WithMain)

add_executable(test_BubbleSort test_BubbleSort.cpp)
target_include_directories(test_BubbleSort PUBLIC "${CMAKE_SOURCE_DIR}")
target_link_libraries(test_BubbleSort PRIVATE Catch2::Catch2WithMain)

add_executable(test_InsertSort test_InsertSort.cpp)
target_include_directories(test_InsertSort PUBLIC "${CMAKE_SOURCE_DIR}")
target_link_libraries(test_InsertSort PRIVATE Catch2::Catch2WithMain)

add_executable(test_SelectSort test_SelectSort.cpp)
target_include_directories(test_SelectSort PUBLIC "${CMAKE_SOURCE_DIR}")
target_link_libraries(test_SelectSort PRIVATE Catch2::Catch2WithMain)