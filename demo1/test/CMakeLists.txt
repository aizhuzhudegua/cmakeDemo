cmake_minimum_required(VERSION 3.0)
project(TEST)
aux_source_directory(./ SRC)
include_directories(${HEAD_PATH})
set(EXECUTABLE_OUTPUT_PATH ${EXEC_PATH})
add_executable(${APP_NAME} ${SRC})
target_link_libraries(${APP_NAME} ${SORT_LIB})


