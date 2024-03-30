/*Q8. Write a C++ program to enter length in centimetres and convert it into meter and kilometre. */

#include <iostream>
using namespace std;

int main() {
    float length;
    cout << "Enter the length in centimetres: ";
    cin >> length;
    cout << "Length in meters: " << length * 0.01 << endl;
    cout << "Length in kilometres: " << length * 0.001 << endl;
    return 0;
}