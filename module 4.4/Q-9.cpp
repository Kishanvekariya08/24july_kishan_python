//Write a Program of Two 1D Matrix Addition using Operator Overloading.

#include<iostream>
using namespace std;

class matrix
{
public:
    int s1[7];
    int x;

    void get()
    {
        cout << "Enter array elements: ";
        for (x = 0; x < 7; x++)
        {
            cin >> s1[x];
        }
    }
    matrix operator+(matrix &m2)
    {
        matrix m3;
        for (int x = 0; x < 7; x++)
        {
            m3.s1[x] = s1[x] + m2.s1[x];
        }
        return m3;
    }
    void display()
    {
        cout << "Addition: ";
        for (int x = 0; x < x; x++)
        {
            cout << s1[x] << " ";
        }
        cout << endl;
    }
};

int main()
{
    matrix M1, M2, M3; 

    cout << "Enter elements for the first matrix:" << endl;
    M1.get(); 
    cout << "Enter elements for the second matrix:" << endl;
    M2.get(); 

    M3 = M1 + M2;
    M3.display();

    return 0;
}