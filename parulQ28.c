#include<stdio.h>
#include<math.h>
int main()
{
 float s,a;
 printf("enter the side of an equilateral triangle\n");
 scanf("%f",&s);
 a=(sqrt(3)/4)*(s*s);
 printf("\n area of the equilateral triangle = %f sq. units",a);
 return 0;
}