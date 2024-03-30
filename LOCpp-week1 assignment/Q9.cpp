/*Q9. Write a C++ program to input angles of a triangle and check whether riangle is valid or not.*/

#include <iostream>
using namespace std;

int main(int argc, char *argv[]) {
    int a, b, c;
    cout << "Enter the angles of a triangle: ";
    cin >> a >> b >> c;
    if (a + b > c && a + c > b && b + c > a) {
        cout << "The triangle is valid." << endl;
    } else {
        cout << "The triangle is invalid." << endl;
    }
    return 0;
}