//Write a program of to swap the two values using template

#include <iostream>
using namespace std;
template <typename T>

class Swapper
{
public:
    Swapper(T &k, T &j)
    {
        T l = k;
        k = j;
        j = l;
    }
};

int main()
{
    int a = 9, b = 11;
    cout << "Before swapping: " << a << " " << b << endl;

    Swapper<int>(a, b);

    cout << "After swapping: " << a << " " << b << endl;

    return 0;
}