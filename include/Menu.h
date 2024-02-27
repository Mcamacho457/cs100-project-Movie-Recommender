#ifndef MENU_H
#define MENU_H

#include <string>
#include <iostream>

using namespace std;

class Menu {
    private:
        char choice;
        char choice2;
        string string1;
        string string2;
    public:
        Menu();
        void menu();
        void menu1();
        void interaction(char option);
        char getChoice();
        char getChoice2();
        string getString1();
        string getString2();
};

#endif