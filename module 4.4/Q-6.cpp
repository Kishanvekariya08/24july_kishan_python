//Write a C++ Program to show access to Private Public and Protected using Inheritance

#include <iostream>
using namespace std; 

class access 
{
private:
    int k; 

public:
    int p = 5; 

protected:
    int l = 10; 
};

class test : public access 
{
public:
    void print()
    {
        cout << "value of public specifier : " << p;
    }
};

class demo : virtual access
{
public:
    void print()
    {
        cout << endl
             << "value of protected specifier : " << l;
    }
};

int main()
{
    test t;   
    t.print(); 
    demo d;    
    d.print(); 