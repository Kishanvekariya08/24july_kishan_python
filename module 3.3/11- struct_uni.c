// WAP to show difference between Structure and Union.

#include <stdio.h>

struct example 
{
    int a;             
    char b;            
    char str_name[20]; 
    double c;          
    float d;           
} e;                 

union example1 
{
    int a;             
    char b;           
    char str_name[20];
    double c;          
    float d;          
} ex;                 \

int main()
{
    printf("Size of structure: %d bytes\n", sizeof(e)); 
        printf("Size of union: %d bytes\n", sizeof(ex));  
    return 0;
}