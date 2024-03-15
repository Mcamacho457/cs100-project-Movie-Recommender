#ifndef MOVIERECOMMENDER_H
#define MOVIERECOMMENDER_H

#include <iostream>
#include "../include/MovieData.h"
#include "../include/Menu.h"
#include "../include/DirectorRecommend.h"
#include "../include/ActorRecommend.h"
#include "../include/YearRecommend.h"
#include "../include/GenreRecommend.h"
#include "../include/MovieDatabase.h"

using namespace std;

class MovieRecommender {
    private:
        MovieDatabase* data;
    public:
        Menu m1;
        MovieRecommender();
        ~MovieRecommender();
};
#endif