//Write a program to calculate the area of circle, rectangle and triangle using Function Overloading Rectangle: Area * breadth Triangle: ½ *Area* breadth Circle: Pi * Area *Area


#include<iostream>
using namespace std;

class calc_area 
{
public:
    int radius, side;
    int area(int area, int breadth)
    {
        cout << endl
             << "Area of Rectangle : " << area * breadth;
    }
    int area(float k, int area, int breadth)
    {
        cout << endl
             << "Area of Triangle : " << k * area * breadth;
    }
    int area(int area)
    {
        cout << endl
             << "Area of Circle : " << 3.14 * area * area;
    }
};

int main()
{
    int k, j;
    cout << "Enter Area : ";
    cin >> k;
    cout << "Enter Breadth : ";
    cin >> j;

    calc_area area; 
    area.area(k, j);
    area.area(0.5, k, j);
    area.area(k);
}