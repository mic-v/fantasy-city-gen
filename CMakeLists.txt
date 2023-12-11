cmake_minimum_required(VERSION 3.25.1)

project(fantasy-city-gen VERSION 0.1.0 LANGUAGES C CXX)

set(CMAKE_RUNTME_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/bin)
option(BUILD_SHARED_LIBS "Build shared libraries" OFF)

include(FetchContent)
FetchContent_Declare(SFML
  GIT_REPOSITORY https://github.com/SFML/SFML.git
  GIT_TAG 2.6.x)
FetchContent_MakeAvailable(SFML)

add_subdirectory(src)

if(WIN32)
  add_custom_command(
    TARGET fantasy-city-gen
    COMMENT "Copy OpenAL DLL"
    PRE_BUILD COMMAND ${CMAKE_COMMAND} -E copy ${SFML_SOURCE_DIR}/extlibs/bin/$<IF:$<EQUAL:${CMAKE_SIZEOF_VOID_P},8>,x64,x86>/openal32.dll $<TARGET_FILE_DIR:CMakeSFMLProject>
    VERBATIM)
endif()

install(TARGETS fantasy-city-gen)

