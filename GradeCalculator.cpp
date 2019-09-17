#include <stdio.h>
#include <iostream>

using namespace std;

int main() {
    const int maxItems = 30;
    double numberItems[maxItems][2];

    for (int i = 0; i <= 80; i++) {
        cout << "*";
    }

    cout << endl;
    cout << "This program will calculate your grade for a single course for up to 30 items." << endl
        << "Currently, the program will not save any information to your computer, however," << endl
        << "future updates are coming with improvements such as adding names and saving." << endl;
    
    for (int i = 0; i <= 80; i++) {
        cout << "*";
    }

    cout << endl << endl;
    cout << ">>How many courses do you want to calculate for?: ";
    int userCourses = 0;
    cin >> userCourses;

    double itemValue = 0;
    double itemGrade = 0;
    for (int n = 0; n < userCourses; n++) {
        cout << "Enter the value for item " << n + 1 << ": ";
        cin >> itemValue;
        numberItems[n][1] = itemValue;
        cout << "Enter the grade for item " << n + 1 << ": ";
        cin >> itemGrade;
        numberItems[n][2] = itemGrade;
    }

    for (int x = 0; x <= 14; x++) {
        cout << "-";
    }
    cout << endl << "Value" << "  |  " << "Grade" << endl;
    for (int x = 0; x <= 14; x++) {
        cout << "-";
    }

    for (int n = 0; n < userCourses; n++) {
        cout << endl << numberItems[n][1] << "  |  " << numberItems[n][2] << endl;
    }

    return 0;
}