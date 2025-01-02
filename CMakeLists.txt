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

add_executable(test_Sorting test_Sorting.cpp Sorting.cpp)
target_include_directories(test_Sorting PUBLIC "${CMAKE_SOURCE_DIR}")
target_link_libraries(test_Sorting PRIVATE Catch2::Catch2WithMain)

add_executable(test_LinkedList test_LinkedList.cpp)
target_include_directories(test_LinkedList PUBLIC "${CMAKE_SOURCE_DIR}")
target_link_libraries(test_LinkedList PRIVATE Catch2::Catch2WithMain)