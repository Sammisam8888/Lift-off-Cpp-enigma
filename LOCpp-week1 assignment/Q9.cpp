/*Q9. Write a C++ program to input angles of a triangle and check whether triangle is valid or not.*/

#include <iostream>
using namespace std;

int main() {
    int a, b, c;
    cout << "Enter the angles of a triangle: ";
    cin >> a >> b >> c;
    if (a + b >= c && a + c >= b && b + c >= a) {
        cout << "The triangle is valid." << endl; //sum of 2 angles is alwatys greater than or equal to the third angle
    } else {
        cout << "The triangle is invalid." << endl;
    }
    return 0;
}