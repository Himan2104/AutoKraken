add_executable(cli ${CMAKE_CURRENT_SOURCE_DIR}/Source/CommandParser.cpp ${CMAKE_CURRENT_SOURCE_DIR}/Source/Main.cpp)

set(AK_CLI_INCLUDE_DIRS ${CMAKE_CURRENT_SOURCE_DIR}/Include)
target_include_directories(cli PRIVATE ${AK_CORE_INCLUDE_DIR})
target_include_directories(cli PRIVATE ${AK_CLI_INCLUDE_DIRS})
target_link_libraries(cli core)