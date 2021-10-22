#include<stdio.h>
#include<math.h>
int main()
{
  float s1,s2,s3,s,ar;
  scanf("%f %f %f",&s1,&s2,&s3);
  s=(s1+s2+s3)/2;
  ar=sqrt(s*(s-s1)*(s-s2)*(s-s3));
  printf("area of triangle with side %f, %f and %f is %f",s1,s2,s3,ar);
  return 0;
}