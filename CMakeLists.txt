CMAKE_MINIMUM_REQUIRED(VERSION 3.0)

project(MovieRecommender)

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




ADD_EXECUTABLE(runTests
    tests/GoogleTest.cpp
    lib/MovieData.cpp

)



TARGET_LINK_LIBRARIES(runTests gtest)
TARGET_COMPILE_DEFINITIONS(runTests PRIVATE gtest_disable_pthreads=ON)