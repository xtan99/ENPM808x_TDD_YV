file(
    GLOB SOURCES
    libs/*.cpp
)
add_executable(shell-app main.cpp ${SOURCES})
include_directories(
    ${CMAKE_SOURCE_DIR}/include
)
