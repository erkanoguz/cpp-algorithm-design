find_package(GTest REQUIRED)
set(PROJECT_NAME cpp-algorithm-design.test)

set(SOURCE  
        main.cpp
        linked_list_basic_test.cpp)

set(CMAKE_RUNTIME_OUTPUT_DIRECTORY ${CMAKE_CURRENT_SOURCE_DIR}/../bin)

add_executable(${PROJECT_NAME} ${SOURCE})

target_link_libraries(${PROJECT_NAME} GTest::gtest_main)
target_link_libraries(${PROJECT_NAME} GTest::gtest)

target_link_libraries(${PROJECT_NAME} pthread)

add_test(NAME ${PROJECT_NAME} COMMAND ${PROJECT_NAME})

