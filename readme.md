# Pico Template
A simple cmake template for the Raspberry Pi pico.

# Setup
Before you can develop any code for the pico, you will need to setup your device. How to do this is contained in the [Getting Started guide](https://datasheets.raspberrypi.org/pico/getting_started_with_pico.pdf). If you haven't yet read this then please do! It contains a lot of useful instructions and will give you a better understanding of what is happening and why! 

The chapters you will want to look at depends on the OS/device you are using:
* Raspberry Pi - Chapter 1
* Linux - Chapter 2
* macOS - Chapter 9.1
* Windows - Chapter 9.2

Once you have your device setup and created your repo using this template, replace all lines of ``PicoTemplate`` in ``CMakeLists.txt`` with your project name and edit the metadata in ``main.cpp``.

# Build (Terminal)
Note that the first line isn't required if you already added PICO_SDK_PATH into your environment.
```bash
export PICO_SDK_PATH=<pico-sdk_folder>
cd <project_folder>
mkdir build
cd build
camke ..
make
```

# Build (IDE)
This is also in the [Getting Started guide](https://datasheets.raspberrypi.org/pico/getting_started_with_pico.pdf), the chapters you will want to look at depends on the IDE:
* Visual Studio Code: Chapter 7
* Eclipse: Chapter 10.1
* CLion: Chapter 10.2

If your IDE isn't here then you can still use it as long it contains CMake integration but to make your life easier it should also contain:
* GDB support with remote options
* SVD. Makes reading peripheral status much easier
* Optional ARM embedded development plugin. These types of plugin often make support much easier

# Apply compiled code onto pico
Copy the .uf2 file onto the pico, it will flash itself onto the pico and start running (if the flash was successful)

# Serial console
```bash
ls /dev/tty.*
screen /dev/tty.usbmodem0000000000001
```