project(demo)

cmake_minimum_required(VERSION 3.1)

aux_source_directory(./src SRCS)
add_executable(demo ${SRCS})

