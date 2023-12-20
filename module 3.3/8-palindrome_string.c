//  WAP to reverse a string and check that the string is palindrome or not

#include <stdio.h>
#include <string.h>
void main()
{
    char word[50], cpyword[50]; 

    printf("Enter a Word : ");
    scanf("%s", &word); 

    strcpy(cpyword, word); 
    strrev(cpyword);      

    if (strcmp(cpyword, word) == 0) 
    {
        printf("String is Palindrome");
    }
    else
    {
        printf("String is not Palindrome");
    }
}