CMAKE_MINIMUM_REQUIRED(VERSION 3.0)

ADD_EXECUTABLE(main_test
    lib/Menu.cpp
    lib/main.cpp
)

ADD_EXECUTABLE(parse_test
    lib/parsing_algorithm.cpp
    lib/MovieData.cpp
)