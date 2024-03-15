#ifndef ACTORRECOMMEND_H
#define ACTORRECOMMEND_H

#include "../include/RecommendationAlgorithm.h"

using namespace std;

class ActorRecommend : public RecommendationAlgorithm {
    public:
        virtual void algorithm(MovieDatabase* database, char choice1, char choice2, string string1, string string2){
            vector<MovieData*> actorMovieList = database->getActorMovieList(string1);
            //keeps track of how many movies have been added to recommendedMovies vector
            int movieCount = 0;
            if (tolower(choice1) == 'a' && tolower(choice2) == 'n') {
                //cout << "Entered director recommend only" << endl;
                
                for (unsigned int i = 0; i < actorMovieList.size(); i++) {
                    insertintoList(actorMovieList.at(i));
                    movieCount++;
                    //makes sure that only five movies are recommended
                    if (movieCount == 5) {
                        //cout << endl << "Movies directed by " << string1 << ':' << endl;
                        break;
                    }
                }
                cout << endl << "Movies with actor " << string1 << ':' << endl;
            }
            else if (tolower(choice1) == 'a' && tolower(choice2) == 'g') {
                //cout << "Entered director/genre recommend" << endl;

                //int movieCount = 0;
                for (unsigned int i = 0; i < actorMovieList.size(); i++) {
                    if (actorMovieList.at(i)->getMovieGenre() == string2) {
                        insertintoList(actorMovieList.at(i));
                        movieCount++;
                    }
                    if (movieCount == 5) {
                        break;
                    }
                }
                cout << endl << string2 << " movies with actor " << string1 << ':' << endl;
            }
            else if (tolower(choice1) == 'a' && tolower(choice2) == 'y') {
                //cout << "Entered director/year recommend" << endl;

                //int movieCount = 0;
                for (unsigned int i = 0; i < actorMovieList.size(); i++) {
                    if (actorMovieList.at(i)->getReleaseYear() == stoi(string2)) {
                        insertintoList(actorMovieList.at(i));
                        movieCount++;
                    }
                    if (movieCount == 5) {
                        break;
                    }
                }
                cout << endl << "Movies with actor " << string1 << ", released in " << string2 << ':' << endl;
            }
            else if (tolower(choice1) == 'a' && tolower(choice2) == 'd') {
                //cout << "Entered actor/director recommend" << endl;

                //int movieCount = 0;
               for (unsigned int i = 0; i < actorMovieList.size(); i++) {
                    if (actorMovieList.at(i)->getDirector() == string2) {
                        insertintoList(actorMovieList.at(i));
                        movieCount++;
                    }
                    if (movieCount == 5) {
                        break;
                    }
                }
                cout << endl << "Movies containing " << string1 << ", directed by " << string2 << ':' << endl;
            }
            return;
        }
};

#endif

