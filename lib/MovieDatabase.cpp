#include "../lib/parsing_algorithm.cpp"
#include "../include/MovieDatabase.h"
#include "../include/MovieData.h"
#include <string>
#include <vector>
#include <sstream>
#include <iostream>
#include <fstream>

using namespace std;

MovieDatabase::MovieDatabase() {
    //function was used for testing purposes
    //generateData();

    string titleFile = "files/Titles.tsv";
    string genreFile = "files/Genres.tsv";
    string directorFile = "files/Directors.tsv";
    string castFile = "files/Casts.tsv";
    string yearFile = "files/Years.tsv";
    this->movies = parseFile(titleFile, genreFile, directorFile, castFile, yearFile);
    
    for (unsigned int i = 0; i < movies.size(); i++) {
        MovieData *newMovie = &(movies.at(i));
        addDirectorToMap(newMovie);
        addGenreToMap(newMovie);
        addYearToMap(newMovie);
        addActorsToMap(newMovie);
    }
}

void MovieDatabase::printData() {
    for (unsigned int i = 0; i < movies.size(); i++) {
        MovieData* currMovie = &(movies.at(i));
        currMovie->printMovie();
    }
}

//was used for testing
/*void MovieDatabase::generateData() {
    //MovieData(string movieDirector, string movieName, vector<string> movieCastMembers, string movieGenre, int movieReleaseYear)
    vector<string> cast1 = {"Tim Robbins", "Morgan Freeman", "Bob Gunton", "William Sadler"};
    MovieData movie1 = MovieData("Frank Darabont", "The Shawshank Redemption", cast1, "Crime", 1994);

    vector<string> cast2 = {"Al Pacino", "James Caan", "Richard S. Castellano"};
    MovieData movie2 = MovieData("Francis Ford Coppola", "The Godfather", cast2, "Crime", 1972);

    vector<string> cast3 = {"Christian Bale", "Heath Ledger", "Aaron Eckhart", "Michael Caine"};
    MovieData movie3 = MovieData("Christopher Nolan", "The Dark Knight", cast3, "Action", 2008);

    vector<string> cast4 = {"Al Pacino", "Robert Duvall", "Diane Keaton", "Robert De Niro"};
    MovieData movie4 = MovieData("Francis Ford Coppola", "The Godfather: Part II", cast4, "Crime", 1974);

    vector<string> cast5 = {"Martin Balsam", "John Fiedler", "Lee J. Cobb", "E.G. Marshall"};
    MovieData movie5 = MovieData("Sidney Lumet", "12 Angry Men", cast5, "Crime", 1957);

    vector<string> cast6 = {"Liam Neeson", "Ben Kingsley", "Ralph Fiennes", "Caroline Goodall"};
    MovieData movie6 = MovieData("Steven Spielberg", "Schindler's List", cast6, "Biography", 1993);

    movies.push_back(movie1);
    movies.push_back(movie2);
    movies.push_back(movie3);
    movies.push_back(movie4);
    movies.push_back(movie5);
    movies.push_back(movie6);
}*/

//actorMap methods
void MovieDatabase::addActorsToMap(MovieData* movie) {
    vector<string> cast = movie->getCastMembers();
    for (unsigned int i = 0; i < cast.size(); i++) {
        string castMember = cast.at(i);
        unordered_map<string, vector<MovieData*>>::const_iterator iter = actorMap.find(castMember);
        if (iter == actorMap.end()) {
            vector<MovieData*> movieVect = {movie};
            actorMap.insert({castMember, movieVect});
        }
        else {
            vector<MovieData*> *movieVect = &actorMap.at(iter->first);
            movieVect->push_back(movie);
        }
    }
}

vector<MovieData*> MovieDatabase::getActorMovieList(string actor) {
    unordered_map<string, vector<MovieData*>>::const_iterator iter = actorMap.find(actor);
    if (iter == actorMap.end()) {
        cout << "Actor: " << actor << " is not in database." << endl;
        vector<MovieData*> movieList = {};
        return movieList;
    }
    else {
        vector<MovieData*> movieList = iter->second;
        return movieList;
    }
}

//directorMap methods
void MovieDatabase::addDirectorToMap(MovieData* movie) {
    unordered_map<string, vector<MovieData*>>::const_iterator iter = directorMap.find(movie->getDirector());
    if (iter == directorMap.end()) {
        vector<MovieData*> movieVect = {movie};
        directorMap.insert({movie->getDirector(), movieVect});
    }
    else {
        vector<MovieData*> *movieVect = &directorMap.at(iter->first);
        movieVect->push_back(movie);
    }
}

vector<MovieData*> MovieDatabase::getDirectorMovieList(string director) {
    unordered_map<string, vector<MovieData*>>::const_iterator iter = directorMap.find(director);
    if (iter == directorMap.end()) {
        cout << "Director: " << director << " is not in database." << endl;
        vector<MovieData*> movieList = {};
        return movieList;
    }
    else {
        vector<MovieData*> movieList = iter->second;
        return movieList;
    }
}

//genreMap methods
void MovieDatabase::addGenreToMap(MovieData* movie) {
    unordered_map<string, vector<MovieData*>>::const_iterator iter = genreMap.find(movie->getMovieGenre());
    if (iter == genreMap.end()) {
        vector<MovieData*> movieVect = {movie};
        genreMap.insert({movie->getMovieGenre(), movieVect});
    }
    else {
        vector<MovieData*> *movieVect = &genreMap.at(iter->first);
        movieVect->push_back(movie);
    }
}

vector<MovieData*> MovieDatabase::getGenreMovieList(string genre) {
    unordered_map<string, vector<MovieData*>>::const_iterator iter = genreMap.find(genre);
    if (iter == genreMap.end()) {
        cout << "Genre: " << genre << " is not in database." << endl;
        vector<MovieData*> movieList = {};
        return movieList;
    }
    else {
        vector<MovieData*> movieList = iter->second;
        return movieList;
    }
}

//yearMap methods
void MovieDatabase::addYearToMap(MovieData* movie) {
    unordered_map<int, vector<MovieData*>>::const_iterator iter = yearMap.find(movie->getReleaseYear());
    if (iter == yearMap.end()) {
        vector<MovieData*> movieVect = {movie};
        yearMap.insert({movie->getReleaseYear(), movieVect});
    }
    else {
        vector<MovieData*> *movieVect = &yearMap.at(iter->first);
        movieVect->push_back(movie);
    }
}

vector<MovieData*> MovieDatabase::getYearMovieList(int year) {
    unordered_map<int, vector<MovieData*>>::const_iterator iter = yearMap.find(year);
    if (iter == yearMap.end()) {
        cout << "Year: " << year << " is not in database." << endl;
        vector<MovieData*> movieList = {};
        return movieList;
    }
    else {
        vector<MovieData*> movieList = yearMap.at(year);
        return movieList;
    }
}

vector<MovieData> MovieDatabase::getData() {
    return movies;
}