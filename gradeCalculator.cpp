#include <stdio.h>
#include <iostream>
#include <iomanip>

using namespace std;

template<typename T> void printItem(T t, const int& width) { // template function to print data in aligned form
        cout << left << setw(width) << setfill(' ') << t;
    }

int main() {
    
    const int maxItems = 30; // constant variable for max course items allowed
    double numberItems[maxItems][2]; // 2D array of type double to store grades and their corresponding worth

    for (int i = 0; i <= 80; i++) { // beginning of printing of intro
        cout << "*";
    }

    cout << endl; 
    cout << "This program will calculate your grade for a single course for up to 30 items." << endl
        << "Currently, the program will not save any information to your computer, however," << endl
        << "future updates are coming with improvements such as adding names and saving." << endl;
    
    for (int i = 0; i <= 80; i++) {
        cout << "*";
    } // end of printing of intro

    cout << endl << endl;
    cout << ">>How many course items do you want to calculate for?: "; // prompt user for number of items
    int userCourses = 0; 
    cin >> userCourses; // stored in userCourses

    double itemweight = 0; // creation and storing of item weights and grades depending on how many items user requested
    double itemGrade = 0;
    for (int n = 0; n < userCourses; n++) {
        cout << "Enter the weight for item (%) " << n + 1 << ": ";
        cin >> itemweight;
        numberItems[n][0] = itemweight;
        cout << "Enter the grade for item " << n + 1 << ": ";
        cin >> itemGrade;
        numberItems[n][1] = itemGrade;
    }

    double itemMark = 0; // mark of item
    double totalItemMarks = 0; // sum of all marks
    double weight = 0; // weight of item
    double totalWeight = 0; // sum of all weights
    double weightEarned = 0; // weight of item earned
    double totalWeightEarned = 0; // sum of all weights earned
    double sumWeightEarned = 0;

    for (int n = 0; n < userCourses; n++) {
        weight = numberItems[n][0]; // weight set to weight set by user
        totalWeight += weight; // weight added to totalWeight
        itemMark = numberItems[n][1]; // itemMark set to mark set by user
        totalItemMarks += itemMark; // itemMark added to totalItemMarks
        weightEarned = itemMark * (weight / 100); // weightEarned calculated by using mark as the percentage of the weight of the item
        totalWeightEarned += weightEarned; // weightEarned added to totalWeightEarned
        // sumWeightEarned += (weight * itemMark); // the sum of the products of the mark and it's weight
    }

    totalWeight = totalWeight/100;

    cout << "Total weight (%): " << totalWeight << endl; // for debugging purposes
    cout << "Total course marks: " << totalItemMarks << endl;
    cout << "Total weight earned: " << totalWeightEarned << endl;
    
    double average = totalWeightEarned / totalWeight; // calculating the final average

    cout << endl;

    printItem("Item Number", 20); // printing of data in table form
    for (int n = 0; n < userCourses; n++) {
        printItem(n + 1, 8);
    }
    cout << endl;
    printItem("weight", 20);
    for (int n = 0; n < userCourses; n++) {
        printItem(numberItems[n][0], 8);
    }
    cout << endl;
    printItem("Grade", 20);
    for (int n = 0; n < userCourses; n++) {
        printItem(numberItems[n][1], 8);
    }
    cout << endl;

    cout << "Course average: " << average << endl;

    return 0;
}