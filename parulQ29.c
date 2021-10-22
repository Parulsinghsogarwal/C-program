#include<stdio.h>
int main()
{
 float a,b,c,d,e,x,y,z;
 printf("marks of maths=");
 scanf("%f",&a);
 printf("marks of physics=");
 scanf("%f",&b);
 printf("marks of chemistry=");
 scanf("%f",&c);
 printf("marks of english=");
 scanf("%f",&d);
 printf("marks of computer=");
 scanf("%f",&e);
 x=(a+b+c+d+e);
 printf("total marks=%f\n",x);
 y=x/5;
 printf("average marks=%f\n",y);
 z=(x/500)*100;
 printf("percentage=%f%%",z);
 return 0;
}