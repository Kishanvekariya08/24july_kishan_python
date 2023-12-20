// WAP to checkif the given year is leap year or not
#include <stdio.h>
void main()
{
    int year; 
    printf("Enter year: ");
    scanf("%d", &year); 

    if (year % 4 == 0) 
    {
        printf("Leap year");
    }
    else
    {
        printf("Not Leap year");
    }
}