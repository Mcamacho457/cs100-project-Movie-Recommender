#ifndef GENRERECOMMEND_H
#define GENRERECOMMEND_H

#include "../include/RecommendationAlgorithm.h"

using namespace std;

class GenreRecommend : public RecommendationAlgorithm {
    public:
        virtual void algorithm(MovieDatabase* database, char choice1, char choice2, string string1, string string2){
            vector<MovieData*> genreMovieList = database->getGenreMovieList(string1);
            //keeps track of how many movies have been added to recommendedMovies vector
            int movieCount = 0;
            if (tolower(choice1) == 'g' && tolower(choice2) == 'n') {
                
                for (unsigned int i = 0; i < genreMovieList.size(); i++) {
                    insertintoList(genreMovieList.at(i));
                    movieCount++;
                    //makes sure that only five movies are recommended
                    if (movieCount == 5) {
                        //cout << endl << "Movies directed by " << string1 << ':' << endl;
                        break;
                    }
                }
                cout << endl << "Movies under genre " << string1 << ':' << endl;
            }
            else if (tolower(choice1) == 'g' && tolower(choice2) == 'a') {                                           //genre and actor

                //int movieCount = 0;
                for (unsigned int i = 0; i < genreMovieList.size(); i++) {
                    vector<string> movieCast = genreMovieList.at(i)->getCastMembers();
                    
                    for (unsigned int j = 0; j < movieCast.size(); j++) {
                        if (movieCast.at(j) == string2) {
                            insertintoList(genreMovieList.at(i));
                            movieCount++;
                        }
                    }
                    if (movieCount == 5) {
                        break;
                    }
                }
                cout << endl << "Movies containing " << string2 << ", under genre " << string1 << ':' << endl;
            }
            else if (tolower(choice1) == 'g' && tolower(choice2) == 'y') {                                               //genre and year

                //int movieCount = 0;
                for (unsigned int i = 0; i < genreMovieList.size(); i++) {
                    if (genreMovieList.at(i)->getReleaseYear() == stoi(string2)) {
                        insertintoList(genreMovieList.at(i));
                        movieCount++;
                    }
                    if (movieCount == 5) {
                        break;
                    }
                }
                cout << endl << "Movies under genre " << string1 << ", released in " << string2 << ':' << endl;
            }
            else if (tolower(choice1) == 'g' && tolower(choice2) == 'd') {                                                               //genre and director

                //int movieCount = 0;
               for (unsigned int i = 0; i < genreMovieList.size(); i++) {
                    if (genreMovieList.at(i)->getDirector() == string2) {
                        insertintoList(genreMovieList.at(i));
                        movieCount++;
                    }
                    if (movieCount == 5) {
                        break;
                    }
                }
                cout << endl << "Movies under genre " << string1 << ", directed by " << string2 << ':' << endl;
            }
            return;
        }
};

#endif

