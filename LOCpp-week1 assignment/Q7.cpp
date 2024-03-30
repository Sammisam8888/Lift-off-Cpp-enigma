/*Q7. Write a C++ program to enter marks of five subjects and calculate total, average and percentage. */

#include <iostream>
using namespace std;

int main() {
    int marks[5];
    int total = 0,fullmarks;
    cout<<"Enter full marks in each subject :";
    cin>>fullmarks;
    for (int i = 0; i < 5; i++) {
        cout << "Enter marks of subject " << i + 1 << ": ";
        cin >> marks[i];
        total += marks[i];
    }

    float average = (float) total / 5;
    float percentage = (float)(100*total/(5*fullmarks));


    cout << "Total: " << total << endl;
    cout << "Average: " << average << endl;
    cout << "Percentage: " << percentage << endl;

    return 0;
}