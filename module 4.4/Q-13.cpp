//Write a program to find the max number from given two numbers using friend function

#include<iostream>
using namespace std;

Class max_no
{
private:
    int num1, num2; 

public:
    max_no(int a, int b) 
    {
        num1 = a;
        num2 = b;
    }

    friend int find_max(max_no mn); 
};

int find_max(max_no mn) 
{
    if (mn.num1 > mn.num2)
    {
        return mn.num1;
    }
    else if (mn.num1 < mn.num2)
    {
        return mn.num2;
    }
}

int main()
{
    
    int num1, num2;
    cout << "Enter two numbers: ";
    cin >> num1 >> num2;

    max_no mn(num1, num2);                         
    cout << "Maximum number is: " << find_max(mn); 

    return 0;
}