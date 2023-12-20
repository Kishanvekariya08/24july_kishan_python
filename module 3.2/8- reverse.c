// WAP to print number in reverse order e.g.: number = 64728 ---> reverse = 82746
#include <stdio.h>
void main()
{
    int i, n, a, rev = 0; 
    printf("Enter a value: ");
    scanf("%d", &n); 

    for (i = n; i != 0; i /= 10)
    {
        a = i % 10;        
        rev = rev * 10 + a;
    }
    printf("%d", rev);
}
