#include "../include/Menu.h"
#include "../include/DirectorRecommend.h"
#include "../include/ActorRecommend.h"
#include "../include/GenreRecommend.h"

using namespace std;

Menu::Menu() {
}

//lists options to search
void Menu::menu1() {
    cout << "A) Actor" << endl;
    cout << "D) Director" << endl;
    cout << "G) Genre" << endl;
    cout << "Y) Year" << endl << endl;

    cout << "Or press Q to quit." << endl;
}

void Menu::menu() {
    cout << "Press a key to sort by each of the following:" << endl;
    this->menu1();

    cin >> choice;

    while (tolower(choice) != 'q' && tolower(choice) != 'a' && tolower(choice) != 'd' && tolower(choice) != 'g' && tolower(choice) != 'y') {
        cout << "Invalid choice, please try again: " << endl;
        cin >> choice;
    }

    if (tolower(choice) == 'q') {
        return;
    }
    else if (tolower(choice) == 'a' || tolower(choice) == 'd' || tolower(choice) == 'g' || tolower(choice) == 'y') {
        cout << endl;
        this->interaction(choice);
        cin.ignore();
        getline(cin, string1);
    }

    cout << endl << "Would you like to search based on additional criteria? (Choose a criteria different from your first choice)" << endl;
    this->menu1();
    cout << "        (Enter N to search by only your first option)" << endl;

    cin >> choice2;

    while (tolower(choice2) != 'n' && tolower(choice2) != 'q' && tolower(choice2) != 'a' && tolower(choice2) != 'd' && tolower(choice2) != 'g' && tolower(choice2) != 'y') {
        cout << "Invalid choice, please try again: " << endl;
        cin >> choice2;
    }
    
    if (tolower(choice2) == 'q') {
        return;
    }
    else if (tolower(choice2) != 'n' && (tolower(choice2) == 'a' || tolower(choice2) == 'd' || tolower(choice2) == 'g' || tolower(choice2) == 'y')) {
        cout << endl;
        this->interaction(choice2);
        cin.ignore();
        getline(cin, string2);
    }
}

void Menu::interaction(char option) {
    if (tolower(option) == 'a') {
        cout << "Actor Search" << endl << endl;
        cout << "Enter an actor or actresses's name: ";
    }

    else if (tolower(option) == 'd') {
        cout << "Director Search" << endl;
        cout << "Enter a director's name: ";
    }

    else if (tolower(option) == 'g') {
        cout << "Genre Search" << endl;
        cout << "Enter a genre: " << endl;
    }

    else if (tolower(option) == 'y') {
        cout << "Year Search" << endl;
        cout << "Enter a year: " << endl;
    }
}

char Menu::getChoice() {
    return this->choice;
}

char Menu::getChoice2() {
    return this->choice2;
}

string Menu::getString1() {
    return this->string1;
}

string Menu::getString2() {
    return this->string2;
}