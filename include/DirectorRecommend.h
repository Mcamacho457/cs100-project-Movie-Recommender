#ifndef DIRECTORRECOMMEND_H
#define DIRECTORRECOMMEND_H

#include "../include/RecommendationAlgorithm.h"

using namespace std;

class DirectorRecommend : public RecommendationAlgorithm {
    public:
        virtual void algorithm(MovieDatabase* database, char choice1, char choice2, string string1, string string2){
            vector<MovieData*> directorMovieList = database->getDirectorMovieList(string1);
            //keeps track of how many movies have been added to recommendedMovies vector
            int movieCount = 0;
            if (tolower(choice1) == 'd' && tolower(choice2) == 'n') {
                //cout << "Entered director recommend only" << endl;
                
                for (unsigned int i = 0; i < directorMovieList.size(); i++) {
                    insertintoList(directorMovieList.at(i));
                    movieCount++;
                    //makes sure that only five movies are recommended
                    if (movieCount == 5) {
                        return;
                    }
                }
                cout << endl << "Movies directed by " << string1 << ':' << endl;
            }
            else if (tolower(choice1) == 'd' && choice2 == 'g') {
                //cout << "Entered director/genre recommend" << endl;

                //int movieCount = 0;
                for (unsigned int i = 0; i < directorMovieList.size(); i++) {
                    if (directorMovieList.at(i)->getMovieGenre() == string2) {
                        insertintoList(directorMovieList.at(i));
                        movieCount++;
                    }
                    if (movieCount == 5) {
                        return;
                    }
                }
                cout << endl << string2 << " movies directed by " << string1 << ':' << endl;
            }
            else if (tolower(choice1) == 'd' && choice2 == 'y') {
                //cout << "Entered director/year recommend" << endl;

                //int movieCount = 0;
                for (unsigned int i = 0; i < directorMovieList.size(); i++) {
                    if (directorMovieList.at(i)->getReleaseYear() == stoi(string2)) {
                        insertintoList(directorMovieList.at(i));
                        movieCount++;
                    }
                    if (movieCount == 5) {
                        break;
                    }
                }
                cout << endl << "Movies directed by " << string1 << " released in " << string2 << ':' << endl;
            }
            else if (tolower(choice1) == 'd' && choice2 == 'a') {
                cout << "Entered director/actor recommend" << endl;

                //int movieCount = 0;
                for (unsigned int i = 0; i < directorMovieList.size(); i++) {
                    vector<string> movieCast = directorMovieList.at(i)->getCastMembers();
                    
                    for (unsigned int j = 0; j < movieCast.size(); j++) {
                        if (movieCast.at(j) == string2) {
                            insertintoList(directorMovieList.at(i));
                            movieCount++;
                        }
                    }
                    if (movieCount == 5) {
                        return;
                    }
                }
                cout << endl << "Movies containing " << string2 << ", directed by " << string1 << ':' << endl;
            }
            return;
        }
};

#endif