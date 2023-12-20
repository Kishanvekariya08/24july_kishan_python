// WAP to print Fibonacci series up to given numbers
#include <stdio.h>
void main()
{
    int a = 0, b = 1, i, no; 
    printf("Enter a number: ");
    scanf("%d", &no); 

    printf("%d %d", a, b);

    for (i = 2; i < no; i++) 
    {
        int fact = a + b; // 1 = 0 + 1
        a = b;            // a = 1
        b = fact;         // b = 1

        printf(" %d", fact);
    }
}


