cmake_minimum_required(VERSION 3.20)
project(
  c-files
  VERSION 1.0
  LANGUAGES CXX
)

add_executable(
  c-files
  src/main.cpp
)

target_compile_features(c-files PRIVATE cxx_std_23)
target_compile_options(c-files PRIVATE -Wall -Wextra -Wpedantic)
option(ENABLE_SANITIZERS "Enable sanitizers" ON)

if(ENABLE_SANITIZERS AND CMAKE_BUILD_TYPE STREQUAL "Debug")
  target_compile_options(c-files PRIVATE -fsanitize=address,undefined -fno-omit-frame-pointer -g)
  target_link_options(c-files PRIVATE -fsanitize=address,undefined)

endif()

