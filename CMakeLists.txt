cmake_minimum_required(VERSION 3.27)
project(gbemu)

include_directories(${PROJECT_SOURCE_DIR}/include ${PROJECT_SOURCE_DIR}/include/SDL2 ${PROJECT_SOURCE_DIR}/include/SDL2_ttf)
add_executable(gbemu main.cpp)
set(CMAKE_CXX_STANDARD 23)
set(CMAKE_MODULE_PATH ${CMAKE_SOURCE_DIR}/cmake_modules)
find_package(SDL2 CONFIG REQUIRED)
find_package(SDL2_ttf CONFIG REQUIRED)
set(LIB_FILES ${PROJECT_SOURCE_DIR}/lib/cart.cpp
        ${PROJECT_SOURCE_DIR}/lib/cpu.cpp
        ${PROJECT_SOURCE_DIR}/lib/bus.cpp
        ${PROJECT_SOURCE_DIR}/lib/emu.cpp
        ${PROJECT_SOURCE_DIR}/lib/timer.cpp
        include/instructions.h
        include/registers.h
        lib/instructions.cpp
        lib/instruction_processors.cpp
        lib/registers.cpp)
add_library(gbemu_lib ${LIB_FILES})
target_link_libraries(gbemu gbemu_lib
        SDL2::SDL2 SDL2_ttf::SDL2_ttf)

