//Write a C++ program to create a class called Car that has private member variables for company, model, and year. Implement memberv functions to get and set these variables.

#include<iostream>
using namespace std;

class car
{
    char company[20], model[20];
    int year;

public:
    void get()
    {
        cout<<"enter car company name: ";
        cin>> company;
        cout<<"enter car name: ";
        cin>> model;
        cout<<"enter year of launch: ";
        cin>> year;
    }

    void set()
    {
        cout << endl
             << "car company name: " << company;
        cout << endl
             << "car name: " << model;
        cout << endl
             << "year of launch: " << year;    
    }   
};
int main()
{
    car car;
    car.get();
    car.set();
}