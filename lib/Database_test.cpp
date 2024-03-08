#include "../include/MovieData.h"
#include "../include/Menu.h"
#include "../include/MovieDatabase.h"
#include <iostream>
#include <sstream>
#include <string>

using namespace std;

int main()
{
    MovieDatabase dataBase;

    cout << "All movie data: " << endl;
    dataBase.printData();
    cout << endl;
    
    vector<MovieData*> genreMovieList = dataBase.getGenreMovieList("Crime");

    cout << "Crime Genre movie list size: " << genreMovieList.size() << endl;
    for (unsigned int i = 0; i < genreMovieList.size(); i++) {
        genreMovieList.at(i)->printMovie();
    }
    /*cout << endl;

    vector<MovieData*> yearMovieList = dataBase.getYearMovieList(2008);
    cout << "2008 Year movie list size: " << yearMovieList.size() << endl;
    for (unsigned int i = 0; i < yearMovieList.size(); i++) {
        yearMovieList.at(i)->printMovie();
    }
    cout << endl;

    vector<MovieData*> directorMovieList = dataBase.getDirectorMovieList("Francis Ford Coppola");
    cout << "Francis Ford Coppola movie list size: " << directorMovieList.size() << endl;
    for (unsigned int i = 0; i < directorMovieList.size(); i++) {
        directorMovieList.at(i)->printMovie();
    }
    cout << endl;

    vector<MovieData*> actorMovieList = dataBase.getActorMovieList("Al Pacino");
    cout << "Al Pacino movie list size: " << actorMovieList.size() << endl;
    for (unsigned int i = 0; i < actorMovieList.size(); i++) {
        actorMovieList.at(i)->printMovie();
    }
    cout << endl;*/
}