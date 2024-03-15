#include "../include/MovieData.h"
#include <vector>
#include <string>
#include <iostream>
#include <fstream>
#include <sstream>

using namespace std;

vector<MovieData> parseFile(string& titleFile, string& genreFile, string& directorFile, string& castFile, string& yearFile) {
    vector<MovieData> movieList;
    ifstream titleStream(titleFile);
    ifstream genreStream(genreFile);
    ifstream directorStream(directorFile);
    ifstream castStream(castFile);
    ifstream yearStream(yearFile);
    if(!titleStream.is_open()) {
        cout << "Could not open title file" << endl;
        return movieList;
    }
    if(!genreStream.is_open()) {
        cout << "Could not open genre file" << endl;
        return movieList;
    }
    if(!directorStream.is_open()) {
        cout << "Could not open director file" << endl;
        return movieList;
    }
    if(!castStream.is_open()) {
        cout << "Could not open cast file" << endl;
        return movieList;
    }
    if(!yearStream.is_open()) {
        cout << "Could not open year file" << endl;
        return movieList;
    }
    string title = "";
    string genre = "";
    string director = "";
    string cast = "";
    string year = "";
    for(int i = 0; i < 250; i++) {
        string result = "";

        getline(titleStream, title);
        title = title.substr(0, title.size() - 1);
        // result += title;
        // result += '\n';

        getline(genreStream, genre);
        genre = genre.substr(0, genre.size() - 1);
        // result += genre;
        // result += '\n';

        getline(directorStream, director);
        director = director.substr(0, director.size() - 1);
        // result += director;
        // result += '\n';

        vector<string> castVec;
        string castMember;
        getline(castStream, cast);
        stringstream ss(cast);
        while(getline(ss, castMember, ',')) {
            castVec.push_back(castMember);
        }
        /*for(string member : castVec) {
            cout << member;
        }
        cout << endl;*/

        getline(yearStream, year);
        // result += year;
        // result += '\n';
        int yearInt = stoi(year);

        //cout << result << endl;
        
        MovieData newMovie = MovieData(director, title, castVec, genre, yearInt);
        movieList.push_back(newMovie);
    }
    return movieList;
}