/*Q4. Write a C++ program to enter two numbers and perform all arithmetic operations using switch case.*/

#include <iostream>
using namespace std;    
int main(){
    int a,b,c=1;
    cout<<"Enter two numbers: ";
    cin>>a>>b;
    switch(c){
        case 1:
            cout<<"Addition: "<<a+b<<endl;
            
        case 2:
            cout<<"Subtraction: "<<a-b<<endl;
            
        case 3:
            cout<<"Multiplication: "<<a*b<<endl;
            
        case 4:
            cout<<"Division: "<<(float)a/b<<endl;
            break;
        default:
            cout<<"Invalid Input";
            break;
    }
    return 0;
}