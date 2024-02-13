//Write a C++ Program to illustrates the use of Constructors in multilevel inheritance

#include<iostream>
using namespace std;

class k
{
public:
    k()
    {
        cout << endl
             << "constructor of class k";
    }
};

class p : public k
{
public:
    p()
    {
        cout << endl
             << "constructor of class p";
    }
};

class l : public p
{
public:
    l()
    {
        cout << endl
             << "constructor of class l";
    }
};

int main()
{
    l l1;
    return 0;
}