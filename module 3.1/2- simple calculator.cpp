//write a programme for make simple calculator to make addition, subtraction, multiplication, division, modulo
#include<stdio.h>
int no = 100;

int main()
{
	int num1, num2, num3;
	
	printf("Enter a number");
	scanf("%d", &num1);
	
	printf("Enter a number");
	scanf("%d", &num2);
	
	printf("Enter a number");
	scanf("%d", &num3);
	
	printf("\nAddition is: %d",num1+num2+num3);
	printf("\nAddition is: %d",num1-num2-num3);
	printf("\nAddition is: %d",num1*num2*num3);
	printf("\nAddition is: %d",num1/num2/num3);


	
	
	return 0;
}

