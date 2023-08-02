cmake_minimum_required(VERSION 3.23)
project(untitled)

set(CMAKE_CXX_STANDARD 14)

add_executable(untitled main.cpp)
#
#target_link_libraries(untitled C:/Users/Ruslan/untitled/RfSpringVisionSystemLib.lib)
#target_include_directories(untitled PRIVATE ${CMAKE_CURRENT_SOURCE_DIR})
#target_link_libraries(untitled PRIVATE ${CMAKE_CURRENT_SOURCE_DIR}/RfSpringVisionSystemLib.lib)
#target_link_libraries(untitled PRIVATE ${CMAKE_CURRENT_SOURCE_DIR}/RfSpringVisionSystemLib.dll)
#set(SOURCES RfSpringVisionSystemLib.lib)
#set(HEADERS c_interface.h)
#add_library(RF_lib ${SOURCES} ${HEADERS})
#target_include_directories(untitled PUBLIC ${CMAKE_CURRENT_SOURCE_DIR})
#target_link_libraries(untitled  ${CMAKE_SOURCE_DIR}/RfSpringVisionSystemLib.lib)
TARGET_LINK_LIBRARIES(untitled C:\\Users\\Ruslan\\untitled\\RfSpringVisionSystemLib.lib)