#include<stdio.h>
int main()
{
    float p,t,r,si;
    printf("enter the value of p=");
    scanf("%f",&p);
    printf("enter the value of t=");
    scanf("%f",&t);
    printf("enter the value of r=");
    scanf("%f",&r);
    si=(p*t*r)/100;
    printf("simple intrest = %f",si);
    return 0;
}