// Write a program of structure for five employee that provides the following information -print and display empno, empname, address and age

#include <stdio.h>
#include <string.h>

struct employee 
{
    int emp_no;       
    char emp_nm[20];  
    char emp_add[20]; 
    int emp_age;     
} emp[20];            

void main() 
{
    int i;                   
    for (i = 1; i <= 5; i++) 
    {
        printf("\nEnter Details of Employee %d :", i); 

        printf("\nEnter Employee number : ");
        scanf("%d", &emp[i].emp_no);

        printf("Enter Employee Name : ");
        scanf("%s", &emp[i].emp_nm);

        printf("Enter Employee Address : ");
        scanf("%s", &emp[i].emp_add);

        printf("Enter Employee Age : ");
        scanf("%d", &emp[i].emp_age);
    }

    for (i = 1; i <= 5; i++) 
    {
        printf("\n\nDetails of Employee %d :", i);
        printf("\nEmployee No : %d", emp[i].emp_no);
        printf("\nEmployee Name : %s", emp[i].emp_nm);
        printf("\nEmployee Address : %s", emp[i].emp_add);
        printf("\nEmployee Age : %d", emp[i].emp_age);
    }
}
