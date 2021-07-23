cmake_minimum_required(VERSION 3.14...3.20 FATAL_ERROR)

project(
  Ferese
  VERSION 0.0.1
  DESCRIPTION "Ferese game engine"
  LANGUAGES CXX)

if(CMAKE_PROJECT_NAME STREQUAL PROJECT_NAME)
  set(CMAKE_CXX_EXTENSIONS OFF)

  # Support folders in IDEs
  set_property(GLOBAL PROPERTY USE_FOLDERS ON)
  enable_testing()
  add_subdirectory(tests)
endif()

# The compiled library code is here
add_subdirectory(src)

# The executable code is here
add_subdirectory(apps)
