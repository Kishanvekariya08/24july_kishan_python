// Write a program of to sort the array using templates

#include <iostream>
using namespace std;

template <typename T>
class Sorting
{
public:
    Sorting(T arr[])
    {
        sortArray(arr);
    }

    void sortArray(T arr[])
    {
        int n = 9; 
        int k, p;
       
        for (k = 0; k < n; k++)
        {
           
            for (p = k + 1; p < n; p++)
            {
                if (arr[k] > arr[p])
                {
                    T temp = arr[k];
                    arr[k] = arr[p];
                    arr[p] = temp;
                }
            }
        }
    }
};

int main()
{
    int array[9] = {38, 7, 85, 58, 9, 4, 47, 89, 5}; 

    Sorting<int> srt(array); 
    cout << "Sorted array: ";
    for (int k = 0; k < 9; k++)
    {
        cout << array[k] << " ";
    }
    cout << endl;

    return 0;
}