CMAKE_MINIMUM_REQUIRED(VERSION 3.0)

ADD_SUBDIRECTORY(googletest)

ADD_EXECUTABLE(main_test
    lib/Menu.cpp
    lib/main.cpp
)

ADD_EXECUTABLE(database_test
    lib/MovieData.cpp
    lib/MovieDatabase.cpp
    lib/Database_test.cpp
)

ADD_EXECUTABLE(runAllTests
    lib/MovieData.cpp
    lib/MovieDatabase.cpp
    test/GoogleTest.cpp
)

TARGET_LINK_LIBRARIES(runAllTests gtest)
TARGET_COMPILE_DEFINITIONS(runAllTests PRIVATE gtest_disable_pthreads=ON)
