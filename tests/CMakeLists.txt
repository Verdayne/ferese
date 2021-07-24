# Use vcpkg to use Catch2
find_package(Catch2 CONFIG REQUIRED)


set(
  TEST_SOURCES
  src/example_test.cpp
)


add_executable(unit_tests ${TEST_SOURCES})

include(Catch)
# Linked to the main library and Catch2 testing library
target_link_libraries(unit_tests PRIVATE Catch2::Catch2)

catch_discover_tests(unit_tests)