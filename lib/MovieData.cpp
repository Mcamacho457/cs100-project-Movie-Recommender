#include "../include/MovieData.h"

using namespace std;

MovieData::MovieData(string movieDirector, string movieName, vector<string> movieCastMembers, string movieGenre, int movieReleaseYear) {
    this->movieDirector = movieDirector;
    this->movieName = movieName;
    this->movieCastMembers = movieCastMembers; //doesn't seem right, fix later
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

string MovieData::getMovieGenre() {
    return this->movieGenre;
}

int MovieData::getReleaseYear() {
    return this->movieReleaseYear;
}

void printMovie() {
    
}