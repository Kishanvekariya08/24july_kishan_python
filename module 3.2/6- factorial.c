// WAP to print factorial of given number
#include <stdio.h>
void main()
{
    int no, i, fact = 1; 
    printf("Enter a number: ");
    scanf("%d", &no); 

    for (i = 1; i <= no; i++) 
    {
        fact = fact * i; 
    }
    printf("Factorial of %d is %d", no, fact);
}

