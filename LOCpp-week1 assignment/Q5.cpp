/*Q5. Write a C++ program to enter the radius of a circle and find its diameter, circumference and area*/

#include <iostream>
using namespace std;
#define pi 3.14
int main() {
    float r;
    cout << "Enter the radius of a circle: ";
    cin >> r;
    cout << "The diameter of the circle is: " << r * 2 << endl;
    cout << "The circumference of the circle is: " << 2 * pi * r << endl;
    cout << "The area of the circle is: " << pi* r * r << endl;
    return 0;
}