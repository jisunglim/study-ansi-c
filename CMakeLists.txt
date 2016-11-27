cmake_minimum_required(VERSION 3.6)
project(study_ansi_c)

set(CMAKE_C_FLAGS "${CMAKE_C_FLAGS} -Wall -Werror")

# Main
add_executable(main main.c)

# Source files
add_executable(longest-line longest-line.c)
add_executable(arth-op arth-op.c)
add_executable(atoi atoi.c)
add_executable(declare-test declare-test.c)
add_executable(getbits getbits.c)
add_executable(str-test str-test.c)
add_executable(ctype-test ctype-test.c)
add_executable(type type.c)
add_executable(const const.c)