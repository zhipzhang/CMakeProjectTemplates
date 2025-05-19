Doxygen(${CMAKE_PROJECT_DIR}/include docs)
install(
    DIRECTORY ${CMAKE_BINARY_DIR}/docs/
    DESTINATION docs/Examplelib
)