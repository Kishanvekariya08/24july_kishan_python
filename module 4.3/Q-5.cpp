// Write a C++ program to create a class called Triangle that has private member variables for the lengths of its three sides. Implement member functions to determine if the triangle is equilateral, isosceles, or scalene.

#include<iostream>
using namespace std;

class triangle
{
    int side1, side2, side3;

public:
   void check_triangle(int k, int p, int l)
   {
    side1 = k;
    side2 = p;
    side3 = l;
    if (side1 == side2 && side2 == side3 && side3 == side1)
    {
        cout << " triangle is equilateral ";
    }
    else if (side1 == side2 || side2 == side3 || side3 == side1)
    {
        cout << " triangle is isosceles ";
    }
    else
    {
        cout << " triangle is scalene ";
    }
   }
};
int main()
{
    int sidek, sidep, sidel ;
    cout << "enter side k : ";
    cin >> sidek;
    cout << "enter side p : ";
    cin >> sidep;
    cout << "enter side l:  ";
    cin >> sidel;

    triangle tri;
     tri.check_triangle(sidek, sidep, sidel);
}