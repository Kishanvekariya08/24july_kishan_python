//Write a program to swap the two numbers using friend function without using third variable

#include <iostream>
using namespace std; 

class swap_no 
{
private:
    int no1, no2; 

public:
    swap_no(int a, int b) 
    {
        no1 = a; 
        no2 = b; 
    }

    friend int swap(swap_no &sn);

    void display_no()
    {
        cout << "Numbers after swapping: " << no1 << " " << no2 << endl;
    }
};

int swap(swap_no &sn) 
{
    // main logic of swap
    sn.no1 = sn.no1 + sn.no2;
    sn.no2 = sn.no1 - sn.no2;
    sn.no1 = sn.no1 - sn.no2;
}

int main()
{
    int num1, num2; 
    cout << "Enter two numbers: ";
    cin >> num1 >> num2;

    swap_no sn(num1, num2); 
    cout << "Numbers before swapping: " << num1 << " " << num2 << endl;

    swap(sn);        
    sn.display_no(); 

    return 0;
}