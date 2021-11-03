#include<stdio.h>
int main()
{
	float salary,HRA,TA,basicpay;
	scanf("%f",&basicpay);
	HRA=(basicpay*15)/100;
	TA=(basicpay*20)/100;
	salary=basicpay+HRA+TA;
	printf("salary of an employee=%f",salary);
	return 0;
}
