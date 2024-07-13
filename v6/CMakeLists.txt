cmake_minimum_required(VERSION 3.15)

project(test)
# 等价于cmake .. -DCMAKE_CXX_STANDARD=11
set(CMAKE_CXX_STANDARD 11)

set(HOME /home/wzk)
# 即使路径不存在也会自动创建
# set(EXECUTABLE_OUTPUT_PATH ${HOME}/bin)

# set(SOURCE add.cpp div.cpp mult.cpp main.cpp sub.cpp)
# ${PROJECT_SOURCE_DIR}是cmake .. 即..所在的路径
# 自动搜索
# 1、aux_source_directory(${PROJECT_SOURCE_DIR} SOURCE)
# ${CMAKE_CURRENT_SOURCE_DIR}即CMakeLists.txt所在的目录
file(GLOB SOURCE ${CMAKE_CURRENT_SOURCE_DIR}/*.cpp)

add_definitions(-DDEBUG)
add_executable(app ${SOURCE})