#include "../include/MovieData.h"

using namespace std;

MovieData::MovieData(string movieDirector, string movieName, vector<string> movieCastMembers, double movieRating, string movieGenre, int movieReleaseYear) {
    this->movieDirector = movieDirector;
    this->movieName = movieName;
    this->movieCastMembers = movieCastMembers; //doesn't seem right, fix later
    this->movieRating = movieRating;
    this->movieGenre = movieGenre;
    this->movieReleaseYear = movieReleaseYear;
}

string MovieData::getDirector() {
    return this->movieDirector;
}

string MovieData::getTitle() {
    return this->movieName;
}
vector<string> MovieData::getCastMembers() {
    return this->movieCastMembers;
}

double MovieData::getMovieRating() {
    return this->movieRating;
}

string MovieData::getMovieGenre() {
    return this->movieGenre;
}

int MovieData::getReleaseYear() {
    return this->movieReleaseYear;
}