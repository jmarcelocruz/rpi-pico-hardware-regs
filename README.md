# rpi-pico-hardware-regs
Hardware description header files for Raspberry Pico

## Getting started
1. [Build](#build)
   1. [Distribution package](#distribution-package)

### Build
This project is built with Make.

#### Distribution package
Generate the distribution package for the current release with `make dist` or simply `make`.

The version number can be overriden temporarily by passing variables `VERSION_MAJOR`, `VERSION_MINOR` and `VERSION_PATCH`. Once a new release is ready, update these variables in the `Makefile`
