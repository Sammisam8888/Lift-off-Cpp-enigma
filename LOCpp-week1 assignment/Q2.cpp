/*Q2. Write a program that takes a number as input and checks whether it is 
positive, negative or zero.*/
#include <iostream>

using namespace std;

int main(){
    int num;
    cout<<"Enter a number: ";
    cin>>num;
    cout<<"The given number " <<num<<" is : ";
    if(num>0){
        cout<<"Positive"<<endl;
    }
    else if(num<0){
        cout<<"Negative"<<endl;
    }
    else{
        cout<<"Zero";
    }
    return 0;
}