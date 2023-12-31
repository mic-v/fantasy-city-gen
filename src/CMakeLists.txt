add_executable(fantasy-city-gen 
    main.cpp
    system.h system.cpp
    graphics/window.h graphics/window.cpp
    core/map.h core/map.cpp
    core/point.h core/point.cpp
    core/triangle.h core/triangle.cpp
)
target_link_libraries(fantasy-city-gen PRIVATE sfml-graphics)
target_compile_features(fantasy-city-gen PRIVATE cxx_std_17)

