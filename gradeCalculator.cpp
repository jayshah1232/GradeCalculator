#include <stdio.h>
#include <iostream>
#include <iomanip>
#include "intro.h"

using namespace std;

template<typename T> void printItem(T t, const int& width) { // template function to print data in aligned form
        cout << left << setw(width) << setfill(' ') << t;
    }

int main() {
    
    const int starLength = 80;
    const int maxItems = 30; // constant variable for max course items allowed
    double numberItems[maxItems][2]; // 2D array of type double to store grades and their corresponding worth
    
    gc::displayStars(starLength);
    gc::displayIntroText();
    gc::displayStars(starLength);

    cout << endl;
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

    for (int n = 0; n < userCourses; n++) {
        weight = numberItems[n][0]; // weight set to weight set by user
        totalWeight += weight; // weight added to totalWeight
        itemMark = numberItems[n][1]; // itemMark set to mark set by user
        totalItemMarks += itemMark; // itemMark added to totalItemMarks
        weightEarned = itemMark * (weight / 100); // weightEarned calculated by using mark as the percentage of the weight of the item
        totalWeightEarned += weightEarned; // weightEarned added to totalWeightEarned
    }

    totalWeight = totalWeight / 100;

    // cout << "Total weight (%): " << totalWeight << endl; // for debugging purposes
    // cout << "Total course marks: " << totalItemMarks << endl;
    // cout << "Total weight earned: " << totalWeightEarned << endl;
    
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
