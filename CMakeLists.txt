cmake_minimum_required(VERSION 3.22)

include(deps/pigweed/pw_build/pigweed.cmake)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
set(CMAKE_CXX_EXTENSIONS ON)
set(CMAKE_EXPORT_COMPILE_COMMANDS TRUE)

pw_set_backend(pw_log pw_log_basic)
pw_set_backend(pw_assert pw_assert_log)
add_subdirectory(deps/pigweed)

project(app)
add_executable(${PROJECT_NAME} 
    pw_log_string_backend.c
    main.cpp)
target_link_libraries(${PROJECT_NAME} PUBLIC pw_log)
