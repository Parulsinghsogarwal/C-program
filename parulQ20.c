#include<stdio.h>
int main()
{
  float cm,m,km;
  printf("enter the value in cm");
  scanf("%f",&cm);
  m=cm/100.0;
  km=cm/100000.0;
  printf("the value in meter is %f\n",m);
  printf("the value in kilometer is %f",km);
  return 0;
}