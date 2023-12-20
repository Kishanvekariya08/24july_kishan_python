//write a programme for make simple calculator to make addition, subtraction, multiplication, division, modulo
#include<stdio.h>
int no = 50;

int main()

{
	int num1, num2 ;
	
	printf("Enter a number");
	scanf("%d", &num1);
	
	printf("Enter a number");
	scanf("%d", &num2);
	
	printf("\nAddition is: %d",num1+num2);
	printf("\nAddition is: %d",num1-num2);
	printf("\nAddition is: %d",num1*num2);
	printf("\nAddition is: %d",num1/num2);
	printf("\nAddition is: %d",num1%num2);
	
	return 0;
}

