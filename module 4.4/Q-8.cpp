//Write a program to Mathematic operation like Addition, Subtraction, Multiplication, Division Of two number using different parameters and Function Overloading

#include<iostream>
using namespace std;

class math_op
{
public:
    int addition(int k, int j)
    {
        return k + j;
    }

    int addition(float k, float j)
    {
        return k + j;
    }

    int subtraction(int k, int j)
    {
        return k - j;
    }
    int subtraction(float k, float j)
    {
        return k - j;
    }

    int multiplication(int k, int j)
    {
        return k * j;
    }

    int multiplication(float k, float j)
    {
        return k * j;
    }

    int division(int k, int j)
    {
        return k / j;
    }
    int division(float k, float j)
    {
        return k / j;
    }
};

int main()
{
    float n1, n2;
    cout << "Enter number 1 : ";
    cin >> n1;
    cout << "Enter number 2 : ";
    cin >> n2;
    math_op math;
    cout << endl
         << "addition of int : " << math.addition(n1, n2);
    cout << endl
         << "addition of float : " << math.addition(n1, n2);
    cout << endl
         << "subtraction of int : " << math.subtraction(n1, n2);
    cout << endl
         << "subtraction of float : " << math.subtraction(n1, n2);
    cout << endl
         << "multiplication of int : " << math.multiplication(n1, n2);
    cout << endl
         << "multiplication of float : " << math.multiplication(n1, n2);
    cout << endl
         << "division of int : " << math.division(n1, n2);
    cout << endl
         << "division of float : " << math.division(n1, n2);
}