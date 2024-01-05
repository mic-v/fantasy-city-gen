add_executable(fcg-test 
    test_point.cpp
    test_map.cpp
)

target_compile_features(fcg-test PRIVATE cxx_std_17)
target_include_directories(fcg-test PUBLIC ${doctest_SOURCE_DIR}
    ${PROJECT_SOURCE_DIR}/src/core/include
)
target_link_libraries(fcg-test core)

add_test(NAME test COMMAND fcg-test)
#target_link_libraries(fcg-test doctest)