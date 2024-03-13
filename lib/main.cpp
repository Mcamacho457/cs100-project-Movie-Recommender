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

    while (tolower(m1.getChoice()) != 'q' && m1.getChoice2() != 'q' && tolower(start) != 'q') {
        cout << endl << "Hit R to restart or Q to quit" << endl;
        cin >> start;

        if (tolower(start) == 'r') {
            cout << endl;
            m1.menu();
        }
    }

    return 0;
}