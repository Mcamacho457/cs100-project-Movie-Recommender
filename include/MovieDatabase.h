#ifndef MOVIEDATABASE_H
#define MOVIEDATABASE_H

#include "../include/MovieData.h"
#include <unordered_map>
#include <vector>
#include <iostream>
#include <fstream>

using namespace std;

class MovieDatabase {
    private:
        unordered_map<string, vector<MovieData*>> actorMap;
        unordered_map<string, vector<MovieData*>> directorMap;
        unordered_map<string, vector<MovieData*>> genreMap;
        unordered_map<int, vector<MovieData*>> yearMap;

        vector<MovieData> movies;
    public:
        MovieDatabase();

        void addActorsToMap(MovieData* movie);
        void addDirectorToMap(MovieData* movie);
        void addGenreToMap(MovieData* movie);
        void addYearToMap(MovieData* movie);
        
        vector<MovieData*> getActorMovieList(string actor);
        vector<MovieData*> getDirectorMovieList(string director);
        vector<MovieData*> getGenreMovieList(string genre);
        vector<MovieData*> getYearMovieList(int year);
        vector<MovieData> getData();

        //was used for testing
        //void generateData();
        void printData();

};

#endif