// Write a program you have to make a summation of first and last Digit. (E.g., 1234 Ans: -5)
#include <stdio.h>
void main()
{
    int n, i, sum; 
    printf("Enter a Value : ");
    scanf("%d", &n);

    sum = n % 10;  
    while (n > 10) 
    {
        n = n / 10;
    }
    sum = sum + n; 
    printf("%d", sum);
}