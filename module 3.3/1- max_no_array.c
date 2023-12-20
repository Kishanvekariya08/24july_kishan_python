// Write a program to find out the max number from given array using function

#include <stdio.h>

int n, i, max = 0; 

void find_max() 
{
    printf("How many elements do want to enter : ");
    scanf("%d", &n); 

    int arr[n];

    for (i = 0; i <= n; i++) 
    {
        printf("Enter element %d : ", i, arr[i]);
        scanf("%d", &arr[i]); 
    }

    for (i = 0; i <= n; i++) 
    {
        if (arr[i] > max)
        {
            max = arr[i];
        }
    }
    printf("%d", max);
}

void main()
{
    find_max();
}