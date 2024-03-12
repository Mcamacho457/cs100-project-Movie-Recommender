#ifndef RECOMMENDATIONALGORITHM_H
#define RECOMMENDATIONALGORITHM_H

#include <string>
#include <iostream>
#include "../include/MovieData.h"
#include "../include/MovieDatabase.h"

using namespace std;

class RecommendationAlgorithm {
    private:
        vector<MovieData*> recommendedMovies;
    public:
        void insertintoList(MovieData* movie);
        virtual void algorithm(MovieDatabase* database, char choice1, char choice2, string string1, string string2) = 0;
        vector<MovieData*> getList();

};

#endif