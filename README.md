    This is a starting point for a gcc-built nRF52 application.

1) Symlink your nrf SDK to 'SDK' in this project directory

2) Ensure you have an ARM GCC compiler installed

3) run 'make', which should result in a basic application that logs "HELLO WORLD" via RTT.

    From here, one can begin development on a project, adding dependencies to the source
and Makefile as needed.

    With a J-link device connected, one can run 'make flash' to install to an nRF52 device
