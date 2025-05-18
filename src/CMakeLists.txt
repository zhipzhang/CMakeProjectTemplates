
add_library(Examplelib add.cpp Utils.cpp)

target_include_directories(Examplelib
    PUBLIC
        $<BUILD_INTERFACE:${CMAKE_CURRENT_SOURCE_DIR}/../include>
        $<INSTALL_INTERFACE:include> # This is relative to the CMAKE_PREFIX_PATH
)



