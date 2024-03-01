#include "gtest/gtest.h"
#include "../include/MovieData.h"
#include "../include/Menu.h"


TEST(movieDataTest, getDirectorTest){
vector<string> movieCastMembers = {"testCast1", "testCast2", "testCast3"};
MovieData *p = new MovieData("testDirector", "testMovieName", movieCastMembers, "testMovieGenre", 0);
EXPECT_EQ(p->getDirector(), "testDirector");
}

TEST(movieDataTest, getMovieNameTest){
vector<string> movieCastMembers = {"testCast1", "testCast2", "testCast3"};
MovieData *p = new MovieData("testDirector", "testMovieName", movieCastMembers, "testMovieGenre", 0);
EXPECT_EQ(p->getTitle(), "testMovieName");
}

TEST(movieDataTest, getCastMembersTest){
vector<string> movieCastMembers = {"testCast1", "testCast2", "testCast3"};
MovieData *p = new MovieData("testDirector", "testMovieName", movieCastMembers, "testMovieGenre", 0);
EXPECT_EQ(p->getCastMembers(), movieCastMembers);
}

TEST(movieDataTest, getMovieGenreTest){
vector<string> movieCastMembers = {"testCast1", "testCast2", "testCast3"};
MovieData *p = new MovieData("testDirector", "testMovieName", movieCastMembers, "testMovieGenre", 0);
EXPECT_EQ(p->getMovieGenre(), "testMovieGenre");
}

TEST(movieDataTest, getReleaseYear){
vector<string> movieCastMembers = {"testCast1", "testCast2", "testCast3"};
MovieData *p = new MovieData("testDirector", "testMovieName", movieCastMembers, "testMovieGenre", 0);
EXPECT_EQ(p->getReleaseYear(), 0);
}





int main(int argc, char **argv) {
    ::testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}