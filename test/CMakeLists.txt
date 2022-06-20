find_package(GTest REQUIRED)

set(SOURCE  
        main.cpp
        linked_list_basic_test.cpp)

set(CMAKE_RUNTIME_OUTPUT_DIRECTORY ${CMAKE_CURRENT_SOURCE_DIR}/../bin)
add_executable(cpp-algorithm-design ${SOURCE})

target_link_libraries(cpp-algorithm-design GTest::gtest_main gtest)
target_link_libraries(cpp-algorithm-design pthread)

add_test(NAME cpp-algorithm-design COMMAND cpp-algorithm-design)  