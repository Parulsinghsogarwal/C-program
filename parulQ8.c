#include<stdio.h>
int main()
{
  int a;
  long b;
  long long c;
  double d;
  long double e;

  printf("size of int is %d bytes\n",sizeof(a));
  printf("size of long is %d bytes\n",sizeof(b));
  printf("size of long long is %d bytes\n",sizeof(c));
  printf("size of double is %d bytes\n",sizeof(d));
  printf("size of long double is %d bytes\n",sizeof(e));
  return 0;
}