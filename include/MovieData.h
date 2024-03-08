#ifndef MOVIEDATA_H
#define MOVIEDATA_H

#include <string>
#include <vector>

using namespace std;

class MovieData {
    private:
        string movieDirector;
        string movieName;
        vector<string> movieCastMembers;
        double movieRating;
        string movieGenre;
        int movieReleaseYear;

    public:
        MovieData(string movieDirector, string movieName, vector<string> movieCastMembers, double movieRating, string movieGenre, int movieReleaseYear);
        string getTitle();
        int getReleaseYear();
        string getMovieGenre();
        vector<string> getCastMembers();
        string getDirector();
        double getMovieRating();
};

#endif