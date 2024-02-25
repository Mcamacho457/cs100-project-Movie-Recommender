#include <iostream>
#include "../include/MovieData.h"
#include "../include/Menu.h"

using namespace std;

int main()
{
    char start = '\0';
    Menu m1;

    cout << "Welcome to the Movie Recommender" << endl;
    cout << "Press S to start." << endl;

    cin >> start;

    if (tolower(start) == 's') {
        m1.menu();
    }

    while (start != 'q') {
        cout << "Hit R to restart or Q to quit" << endl;
        cin >> start;

        if (tolower(start) == 'r') {
            m1.menu();
        }
    }

    return 0;
}