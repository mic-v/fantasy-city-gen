add_subdirectory(core)

add_executable(fantasy-city-gen 
    main.cpp
    system.h system.cpp
)

target_link_libraries(fantasy-city-gen PRIVATE sfml-graphics fcg::core)
target_compile_features(fantasy-city-gen PRIVATE cxx_std_17)
