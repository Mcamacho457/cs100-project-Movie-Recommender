#include "gtest/gtest.h"
#include "../include/MovieData.h"
#include "../include/MovieDatabase.h"
#include "../include/Menu.h"

//This is a test for the MovieData class
TEST(MovieDataConstructorTests, movieConstructorWorks) {
  vector<string> cast1 = {"Tim Robbins", "Morgan Freeman", "Bob Gunton", "William Sadler"};
  EXPECT_NO_THROW(MovieData("Frank Darabont", "The Shawshank Redemption", cast1, "Crime", 1994););
}

TEST(MovieDataConstructorTests, correctMovieNames) {
  vector<string> cast1 = {"Tim Robbins", "Morgan Freeman", "Bob Gunton", "William Sadler"};
  MovieData* movie1 = new MovieData("Frank Darabont", "The Shawshank Redemption", cast1, "Crime", 1994);

  vector<string> cast2 = {"Al Pacino", "James Caan", "Richard S. Castellano"};
  MovieData* movie2 = new MovieData("Francis Ford Coppola", "The Godfather", cast2, "Crime", 1972);

  vector<string> cast3 = {"Christian Bale", "Heath Ledger", "Aaron Eckhart", "Michael Caine"};
  MovieData* movie3 = new MovieData("Christopher Nolan", "The Dark Knight", cast3, "Action", 2008);

  EXPECT_EQ("The Shawshank Redemption", movie1->getTitle());
  EXPECT_EQ("The Godfather", movie2->getTitle());
  EXPECT_EQ("The Dark Knight", movie3->getTitle());
}

//MovieDatabase Class tests
TEST(DatabaseConstructorTests, databaseConstructorWorks) {
  EXPECT_NO_THROW(MovieDatabase());
}

TEST(DatabaseAddMethodsTests, addDirectorMethodNoError) {
  MovieDatabase* database = new MovieDatabase();

  vector<string> cast = {};
  MovieData* movieTest = new MovieData("Director", "Title", cast, "Genre", 2008);

  EXPECT_NO_THROW(database->addDirectorToMap(movieTest));
}

TEST(DatabaseAddMethodsTests, addDirectorMethodCorrectDataAdded) {
  MovieDatabase* database = new MovieDatabase();

  vector<string> cast = {};
  MovieData* movieTest = new MovieData("Director", "Title", cast, "Genre", 2008);

  vector<MovieData*> vect = {movieTest};
  
  database->addDirectorToMap(movieTest);
  vector<MovieData*> directorlist = database->getDirectorMovieList("Director");

  EXPECT_EQ(vect, directorlist);
  EXPECT_EQ(1, directorlist.size());
  EXPECT_EQ(vect.at(0), directorlist.at(0));
}

// tests/GoogleTest.cpp tests
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