add_executable(fantasy-city-gen 
    main.cpp
    window.h
    window.cpp
)
target_link_libraries(fantasy-city-gen PRIVATE sfml-graphics)
target_compile_features(fantasy-city-gen PRIVATE cxx_std_17)

