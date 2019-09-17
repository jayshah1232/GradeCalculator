#include <stdio.h>
#include <iostream>
#include <iomanip>

using namespace std;

template<typename T> void printItem(T t, const int& width) {
        cout << left << setw(width) << setfill(' ') << t;
    }

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
        numberItems[n][0] = itemValue;
        cout << "Enter the grade for item " << n + 1 << ": ";
        cin >> itemGrade;
        numberItems[n][1] = itemGrade;
    }

    double courseMark = 0;
    double totalCourseMarks = 0;
    double value = 0;
    double totalValue = 0;

    for (int n = 0; n < userCourses; n++) {
        value = numberItems[n][0];
        totalValue += value;
        courseMark = numberItems[n][1];
        totalCourseMarks += courseMark;
    }
    cout << "Total value: " << totalValue << endl;
    cout << "Total course marks: " << totalCourseMarks << endl;
    
    double average = totalCourseMarks / totalValue;

    cout << endl;

    printItem("Course Number", 20);
    for (int n = 0; n < userCourses; n++) {
        printItem(n + 1, 8);
    }
    cout << endl;
    printItem("Value", 20);
    for (int n = 0; n < userCourses; n++) {
        printItem(numberItems[n][0], 8);
    }
    cout << endl;
    printItem("Grade", 20);
    for (int n = 0; n < userCourses; n++) {
        printItem(numberItems[n][1], 8);
    }
    cout << endl;

    cout << "Course average: " << average;

    return 0;
}