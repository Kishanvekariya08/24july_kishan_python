// WAP to swap values of two numbers without 3rd variable
#include <stdio.h>
void main()
{
    int j, k; 
    printf("Enter value of j: ");
    scanf("%d", &j); 
    printf("Enter value of k: ");
    scanf("%d", &k); 

    printf("\nBefore swap: \nValue of j is: %d \nVAlue of k is: %d", j, k); 
    j = j + k; // 50 = 20+30
    k = j - k; // 20 = 50-30
    j = j - k; // 30 = 50-20

    printf("\n\nAfter swap: \nValue of j is: %d \nValue of k is: %d", j, k); 
}
