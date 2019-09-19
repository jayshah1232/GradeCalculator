#include <iomanip>
#include <iostream>
#include "intro.h"

using namespace std;

namespace gc {

    void displayStars(int starLength) {
        for (int i = 0; i <= starLength; i++) {
            cout << "*";
        }
        cout << endl;
    }
    void displayIntroText() {
        cout << "This program will calculate your grade for a single course for up to 30 items." << endl
            << "Currently, the program will not save any information to your computer, however," << endl
            << "future updates are coming with improvements such as adding names and saving." << endl;
    }
}