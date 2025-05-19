add_executable(ExamplelibTests test_utils.cpp)
target_link_libraries(ExamplelibTests
    PRIVATE
        Examplelib
        Catch2::Catch2
)
add_test(NAME UtilsTest
    COMMAND ExamplelibTests
)