#include<stdio.h>
int main()
{
  int a,b,x;
  scanf("%d %d",&a,&b);
  x=a+b;
  printf("%d+%d=%d\n",a,b,x);
  x=a-b;
  printf("%d-%d=%d\n",a,b,x);
  x=a*b;
  printf("%d*%d=%d\n",a,b,x);
  x=a/b;
  printf("%d/%d=%d",a,b,x);
  return 0;
}