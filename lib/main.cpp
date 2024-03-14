#include <iostream>
#include "../include/MovieData.h"
#include "../include/Menu.h"
#include "../include/DirectorRecommend.h"
#include "../include/ActorRecommend.h"
#include "../include/GenreRecommend.h"
#include "../include/MovieDatabase.h"

using namespace std;

int main()
{
    char start = '\0';
    Menu m1;
    MovieDatabase* dataBase = new MovieDatabase();
    vector<MovieData*> recommendedMovies = {};

    cout << "Welcome to the Movie Recommender" << endl;
    cout << "Press S to start." << endl;

    cin >> start;

    if (tolower(start) == 's') {
        m1.menu();
    }

    if (tolower(m1.getChoice()) == 'd' && tolower(m1.getChoice2()) != 'q') {
        DirectorRecommend algor;
        algor.algorithm(dataBase, m1.getChoice(), m1.getChoice2(), m1.getString1(), m1.getString2());
        recommendedMovies = algor.getList();
    }
    else if (tolower(m1.getChoice()) == 'a' && tolower(m1.getChoice2()) != 'q'){
        ActorRecommend algor;
        algor.algorithm(dataBase, m1.getChoice(), m1.getChoice2(), m1.getString1(), m1.getString2());
        recommendedMovies = algor.getList();
    }
     else if (tolower(m1.getChoice()) == 'g' && tolower(m1.getChoice2()) != 'q'){
        GenreRecommend algor;
        algor.algorithm(dataBase, m1.getChoice(), m1.getChoice2(), m1.getString1(), m1.getString2());
        recommendedMovies = algor.getList();
    }
    
    for (unsigned int i = 0; i < recommendedMovies.size(); i++) {
        recommendedMovies.at(i)->printMovie();
    }

    /*while (tolower(m1.getChoice()) != 'q' && m1.getChoice2() != 'q' && tolower(start) != 'q') {
        cout << endl << "Hit R to restart or Q to quit" << endl;
        cin >> start;

        if (tolower(start) == 'r') {
            cout << endl;
            m1.menu();
        }
    }*/

    return 0;
}