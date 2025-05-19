# Project Introduction

This is a simple project to demonstrate the use of modern CMake for building a C++ project. The project is structured to be easy to understand and modify, with a focus on best practices in CMake and C++ development.


The project includes:
- src directory containing the source code
- include directory containing the header files
- tests directory containing the unit tests
- cmake directory containing the CMake configuration **files**
- extern directory containing external dependencies
- docs directory containing the documentation

The gitignore file is copied from the [website](https://gist.github.com/Yousha/3830712334ac30a90eb6041b932b68d7)

## CMake structure
This project contain the following parts which will be installed in `cmake --install`
- ExampleLibConfig.cmake generated from the template `cmake/ExamplelibConfig.cmake.in`
- ExamplelibConfigVersion.cmake generated automatically by `write_basic_package_version_file`
- ExamplelibTargets.cmake by `INSTALL(EXPORT)`


