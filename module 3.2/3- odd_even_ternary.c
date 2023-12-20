// WAP to find number is even or odd using ternary operator
#include <stdio.h>
void main()
{
    int no;
    printf("Enter number: ");
    scanf("%d", &no); 

    (no % 2 == 0) ? printf("Number is Even") : printf("Number is Odd");
}
