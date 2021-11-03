#include<stdio.h>
#include<stdlib.h>
int main()
{
	float num1,num2,i;
	printf("Enter the first number=");
	scanf("%f",&num1);
	printf("Enter the second number=");
	scanf("%f",&num2);
	for(i=0; i<num2; i++){num1++;}
	printf("Sum of two numbers=%f",num1);
	return 0;
}