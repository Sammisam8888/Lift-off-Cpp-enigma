/*Q3.Write a program that takes a number as input and prints the sum of its digits using a do-while loop. */

#include<iostream>
using namespace std;

int main()
{
    int n;
    cout<<"Enter a number: ";
    cin>>n;
    int sum=0;
    do
    {
        sum=sum+n%10;
        n=n/10;
    }while(n>0);
    cout<<"Sum of digits of "<<n<<" is "<<sum<<endl;
    return 0;
}