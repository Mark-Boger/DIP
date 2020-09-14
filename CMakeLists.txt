cmake_minimum_required(VERSION 3.10)

project(DIP VERSION 1.0)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED TRUE)

include(CTest)

add_subdirectory(src)
set(CMAKE_RUNTIME_OUTPUT_DIRECTORY ${CMAKE_HOME_DIRECTORY}/bin)
set(CMAKE_LIBRARY_OUTPUT_DIRECTORY ${CMAKE_HOME_DIRECTORY}/lib)

if(BUILD_TESTING)
  add_subdirectory(test)
endif()

configure_file(TutorialConfig.h.in TutorialConfig.h)

add_executable(DIP src/main.cpp)
target_link_libraries(DIP
  color)
