cmake_minimum_required(VERSION 3.15..4.0)
project(Examplelib 
        VERSION 1.0 
        DESCRIPTION "Example project using CMake" 
        LANGUAGES CXX)

if (CMAKE_PROJECT_NAME STREQUAL PROJECT_NAME)
    message(STATUS "This is the top-level project.")
    # Make sure use the -std=c++xx not -std=gnu++xx
    set(CMAKE_CXX_EXTENSIONS OFF)
    include(CTest)

    # Add the Docs and Tests subdirectories
    find_package(Doxygen)
    if(Doxygen_FOUND)
        add_subdirectory(docs)
    else()
        message(STATUS "Doxygen not found, skipping documentation generation.")
    endif()

    add_subdirectory(tests)
endif()

add_subdirectory(src)

install(TARGETS Examplelib
    EXPORT ExamplelibTargets
    LIBRARY DESTINATION lib
    ARCHIVE DESTINATION lib
    RUNTIME DESTINATION bin
    INCLUDES DESTINATION include
)
install(EXPORT ExamplelibTargets
    FILE ExamplelibTargets.cmake
    NAMESPACE Examplelib::
    DESTINATION lib/cmake/Examplelib
)

install(DIRECTORY include/
    DESTINATION include/${PROJECT_NAME}
)
include(CMakePackageConfigHelpers)
write_basic_package_version_file(
    "${CMAKE_CURRENT_BINARY_DIR}/ExamplelibConfigVersion.cmake"
    VERSION ${Examplelib_VERSION}
    COMPATIBILITY SameMajorVersion
)
set(LIB_INSTALL_DIR "${CMAKE_INSTALL_LIBDIR}/Examplelib")
configure_package_config_file(
    "${CMAKE_CURRENT_SOURCE_DIR}/cmake/ExamplelibConfig.cmake.in"
    "${CMAKE_CURRENT_BINARY_DIR}/ExamplelibConfig.cmake"
    INSTALL_DESTINATION lib/cmake/Examplelib
    PATH_VARS LIB_INSTALL_DIR
)
install(FILES
    "${CMAKE_CURRENT_BINARY_DIR}/ExamplelibConfigVersion.cmake"
    "${CMAKE_CURRENT_BINARY_DIR}/ExamplelibConfig.cmake"
    DESTINATION lib/cmake/Examplelib
)