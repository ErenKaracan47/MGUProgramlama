cmake_minimum_required(VERSION 3.22)

project(temelprogramlama)

add_executable(temelprogramlama "${PROJECT_SOURCE_DIR}/main.cpp" "${PROJECT_SOURCE_DIR}/lib/wave.cpp")

target_include_directories(temelprogramlama PRIVATE "${PROJECT_SOURCE_DIR}/lib")

add_custom_command(
    TARGET temelprogramlama POST_BUILD
    COMMAND ${CMAKE_BINARY_DIR}/temelprogramlama
    VERBATIM
)

add_custom_command(
    TARGET temelprogramlama POST_BUILD
    COMMAND python3 ${PROJECT_SOURCE_DIR}/plotscript.py
    VERBATIM
)

add_custom_command(
    TARGET temelprogramlama POST_BUILD
    COMMAND rm ${CMAKE_BINARY_DIR}/temelprogramlama
    VERBATIM
)