add_library(core ${CMAKE_CURRENT_SOURCE_DIR}/Source/Basics.cpp
)

set(AK_CORE_INCLUDE_DIR ${CMAKE_CURRENT_SOURCE_DIR}/Include)
target_include_directories(core PUBLIC ${AK_CORE_INCLUDE_DIR} ${TINYXML2_INCLUDE_DIR})