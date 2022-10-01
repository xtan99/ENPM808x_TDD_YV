set(GTEST_SHUFFLE 1)

file(
    GLOB SOURCES
    ../app/libs/*.cpp
)
add_executable(
    cpp-test
    main.cpp
    test.cpp
    ${SOURCES}
)

target_include_directories(cpp-test PUBLIC ../vendor/googletest/googletest/include 
                                           ${CMAKE_SOURCE_DIR}/include)
target_link_libraries(cpp-test PUBLIC gtest)
