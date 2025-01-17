CMAKE_MINIMUM_REQUIRED(VERSION 3.0)

project(MovieRecommender)

ADD_SUBDIRECTORY(googletest)

ADD_EXECUTABLE(main
    lib/MovieRecommender.cpp
    include/DirectorRecommend.h
    include/ActorRecommend.h
    include/YearRecommend.h
    include/GenreRecommend.h 
    lib/RecommendationAlgorithm.cpp
    lib/MovieData.cpp
    lib/MovieDatabase.cpp
    lib/Menu.cpp
    lib/main2.cpp
)

ADD_EXECUTABLE(main_test
    include/DirectorRecommend.h
    include/ActorRecommend.h
    include/YearRecommend.h
    include/GenreRecommend.h 
    lib/RecommendationAlgorithm.cpp
    lib/MovieData.cpp
    lib/MovieDatabase.cpp
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