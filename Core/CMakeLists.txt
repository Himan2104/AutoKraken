add_library(core Include/Definitions.hpp
        Include/XMLParser.hpp
        Source/Project.cpp
        Source/UIDProvider.cpp)

set(AK_CORE_INCLUDE_DIR ${CMAKE_CURRENT_SOURCE_DIR}/Include)
target_include_directories(core PUBLIC ${AK_CORE_INCLUDE_DIR} ${TINYXML2_INCLUDE_DIR})