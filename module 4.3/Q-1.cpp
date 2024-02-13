// Write a program to find the multiplication values and the cubic values using inline function

#include<iostream>
using namespace std;

class values
{
public:

    inline int multiplication ( int k , int p)
    {
        return k * p ;
    }
    inline int cubic ( int k)
    {
        return k * k * k ;
    }
};

int main()
{ 
    int num1, num2 ;
    cout<< "enter the value of num1: ";
    cin>> num1;

    cout<< "enter the value of num2: ";
    cin>> num2;

    values val;

    cout << "multiplication: " << val.multiplication(num1,num2);
    cout << endl
        << "cubic: " << val.cubic(num1);
}   