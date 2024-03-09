#include "../include/MovieData.h"
#include "../include/Menu.h"
#include "../include/MovieDatabase.h"
#include <iostream>
#include <sstream>
#include <string>

using namespace std;

int main()
{
    MovieDatabase dataBase;

    cout << "All movie data: " << endl;
    dataBase.printData();
}