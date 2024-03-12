#include "../include/RecommendationAlgorithm.h"

using namespace std;

vector<MovieData*> RecommendationAlgorithm::getList() {
    if (recommendedMovies.size() == 0) {
        cout << "List is empty" << endl;
    }
    return recommendedMovies;
}

void RecommendationAlgorithm::insertintoList(MovieData* movie) {
    recommendedMovies.push_back(movie);
}