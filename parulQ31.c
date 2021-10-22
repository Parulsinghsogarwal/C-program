#include<stdio.h>
#include<math.h>
int main()
{
    float p,t,r,ci;
    printf("enter the value of p=");
    scanf("%f",&p);
    printf("enter the value of t=");
    scanf("%f",&t);
    printf("enter the value of r=");
    scanf("%f",&r);
    ci=p*(pow(1+r/100,t));
    printf("compound intrest = %f",ci);
    return 0;
}