// Write a program of Addition, Subtraction, Division, Multiplication using constructor

#include<iostream>
using namespace std;

class addition
{
public:
    addition (int p, int q)
    { 
     cout<<endl
          <<" addition: " << p + q;
    }
};
class subraction
{
public: 
    subraction (int p, int q)
    {
        if (p < q)

    {cout<<endl
         <<" subraction: " << q - p;
    }
    else
    {
        cout<<endl
        <<" substraction: " << p - q;
    }
    }
};
class division
{
public:
    division (float p, float q)
    { 
     cout<<endl
          <<" division: " << p / q;
    }
};
class multiplication
{
public:
    multiplication (int p, int q)
    {
     cout<<endl
          <<" multiplication: " << p + q;
    }
};
int main()
{
    int num1 , num2;
    cout<<"enter num1: ";
    cin>> num1;
    cout<<" enter num2: ";
    cin>> num2;

    addition add(num1 , num2);
    subraction sub(num1 , num2);
    division div(num1 , num2);
    multiplication mul(num1 , num2);
    return 0;
}