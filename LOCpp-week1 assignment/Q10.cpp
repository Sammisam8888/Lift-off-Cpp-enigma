/*Q10. Write a C++ program to check whether the triangle is equilateral, sosceles or scalene triangle.*/

#include <iostream>
using namespace std;

int main() {
    int a, b, c;
    cout << "Enter three sides of triangle: ";
    cin >> a >> b >> c;
    if (a == b && b == c && a == c) {
        cout << "Equilateral Triangle";
    } else if (a == b || b == c || a == c) {
        cout << "Isosceles Triangle";
    } else {
        cout << "Scalene Triangle";
    }
    return 0;
}