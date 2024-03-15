#include "../include/MovieRecommender.h"

using namespace std;

MovieRecommender::MovieRecommender() {
    char start = '\0';
    data = new MovieDatabase();
    vector<MovieData*> recommendedMovies = {};

    cout << "Welcome to the Movie Recommender" << endl;
    cout << "Press S to start." << endl;

    cin >> start;

    if (tolower(start) == 's') {
        m1.menu();
    }

    if (tolower(m1.getChoice()) == 'd' && tolower(m1.getChoice2()) != 'q') {
        DirectorRecommend algor;
        algor.algorithm(data, m1.getChoice(), m1.getChoice2(), m1.getString1(), m1.getString2());
        recommendedMovies = algor.getList();
    }
    else if (tolower(m1.getChoice()) == 'a' && tolower(m1.getChoice2()) != 'q'){
        ActorRecommend algor;
        algor.algorithm(data, m1.getChoice(), m1.getChoice2(), m1.getString1(), m1.getString2());
        recommendedMovies = algor.getList();
    }
    else if (tolower(m1.getChoice()) == 'y' && tolower(m1.getChoice2()) != 'q'){
        YearRecommend algor;
        algor.algorithm(data, m1.getChoice(), m1.getChoice2(), m1.getString1(), m1.getString2());
        recommendedMovies = algor.getList();
    }
     else if (tolower(m1.getChoice()) == 'g' && tolower(m1.getChoice2()) != 'q'){
        GenreRecommend algor;
        algor.algorithm(data, m1.getChoice(), m1.getChoice2(), m1.getString1(), m1.getString2());
        recommendedMovies = algor.getList();
    }
    
    for (unsigned int i = 0; i < recommendedMovies.size(); i++) {
        recommendedMovies.at(i)->printMovie();
    }
}

MovieRecommender::~MovieRecommender() {
    delete data;
}