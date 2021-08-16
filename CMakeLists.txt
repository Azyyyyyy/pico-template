cmake_minimum_required(VERSION 3.13)

include($ENV{PICO_SDK_PATH}/pico_sdk_init.cmake)

project(PicoTemplate C CXX ASM)
set(CMAKE_C_STANDARD 11)
set(CMAKE_CXX_STANDARD 17)

pico_sdk_init()

add_executable(PicoTemplate main.cpp)

# Link with the pico stdlib
target_link_libraries(PicoTemplate pico_stdlib)

# Create map/bin/hex/uf2 files
pico_add_extra_outputs(PicoTemplate)

# Enable USB serial
# pico_enable_stdio_usb(PicoTemplate 1)
# pico_enable_stdio_uart(PicoTemplate 0)
