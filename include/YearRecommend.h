#ifndef YEARRECOMMEND_H
#define YEARRECOMMEND_H

#include "../include/RecommendationAlgorithm.h"

using namespace std;

class YearRecommend : public RecommendationAlgorithm {
    public:
        virtual void algorithm(MovieDatabase* database, char choice1, char choice2, string string1, string string2){
            vector<MovieData*> yearMovieList = database->getYearMovieList(stoi(string1));
            //keeps track of how many movies have been added to recommendedMovies vector
            int movieCount = 0;
            if (tolower(choice1) == 'y' && tolower(choice2) == 'n') {
                //cout << "Entered director recommend only" << endl;
                
                for (unsigned int i = 0; i < yearMovieList.size(); i++) {
                    insertintoList(yearMovieList.at(i));
                    movieCount++;
                    //makes sure that only five movies are recommended
                    if (movieCount == 5) {
                        //cout << endl << "Movies directed by " << string1 << ':' << endl;
                        break;
                    }
                }
                cout << endl << "Movies with year " << string1 << ':' << endl;
            }
            else if (tolower(choice1) == 'y' && tolower(choice2) == 'g') {
                //cout << "Entered director/genre recommend" << endl;

                //int movieCount = 0;
                for (unsigned int i = 0; i < yearMovieList.size(); i++) {
                    if (yearMovieList.at(i)->getMovieGenre() == string2) {
                        insertintoList(yearMovieList.at(i));
                        movieCount++;
                    }
                    if (movieCount == 5) {
                        break;
                    }
                }
                cout << endl << string2 << " movies with year " << string1 << ':' << endl;
            }
            else if (tolower(choice1) == 'y' && tolower(choice2) == 'd') {
                //cout << "Entered director/year recommend" << endl;

                //int movieCount = 0;
                for (unsigned int i = 0; i < yearMovieList.size(); i++) {
                    if (yearMovieList.at(i)->getDirector() == string2) {
                        insertintoList(yearMovieList.at(i));
                        movieCount++;
                    }
                    if (movieCount == 5) {
                        break;
                    }
                }
                cout << endl << "Movies with year " << string1 << ", directed by " << string2 << ':' << endl;
            }
            else if (tolower(choice1) == 'y' && tolower(choice2) == 'a') {
                cout << "Entered year/actor recommend" << endl;

                //int movieCount = 0;
                for (unsigned int i = 0; i < yearMovieList.size(); i++) {
                    vector<string> movieCast = yearMovieList.at(i)->getCastMembers();
                    
                    for (unsigned int j = 0; j < movieCast.size(); j++) {
                        if (movieCast.at(j) == string2) {
                            insertintoList(yearMovieList.at(i));
                            movieCount++;
                        }
                    }
                    if (movieCount == 5) {
                        break;
                    }
                }
                cout << endl << "Movies containing " << string2 << ", in year(s) " << string1 << ':' << endl;
            }
            return;
        }
};

#endif