#include<stdio.h>
int main()
{
  int r,d,c,ar;
  printf("enter the value of r");
  scanf("%d",&r);
  d=2*r;
  printf("diameter=%d\n",d);
  c=2*3.14*r;
  printf("circumfrence=%d\n",c);
  ar=3.14*r*r;
  printf("area=%d",ar);
  return 0;
}