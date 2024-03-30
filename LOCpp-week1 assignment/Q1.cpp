/* Q1. Write a program to print the numbers from 1 to 100, but replace 
multiples of 3 with "Fizz" and multiples of 5 with "Buzz". */

#include <iostream>
using namespace std;

int main(){
    int i = 1;
    while(i <= 100){
        if(i % 3 == 0 && i % 5 == 0){
            cout << "FizzBuzz"; 
        }
        else if(i % 3 == 0){
            cout << "Fizz";
        }
        else if(i % 5 == 0){
            cout << "Buzz";
        }
        else{
            cout << i;
        }
        cout << endl;
        i++;
    }
    return 0;
}