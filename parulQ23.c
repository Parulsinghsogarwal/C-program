#include<stdio.h>
int main()
{
 int d,w,y;
 d=4635;
 y=d/365;
 w=d%365 /7;
 d=d-((y*365)+(w*7));
 printf("%d years %d weeks %d days",y,w,d); 
 return 0;
}