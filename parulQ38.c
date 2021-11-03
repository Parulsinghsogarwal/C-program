#include<stdio.h>
int main()
{
	int x,y,z;
	x=30000;
	y=x+(x*20)/100;
	z=y+(y*30)/100;
	printf("population after 1st year= %d\npopulation after 2nd year=%d",y,z);
	return 0;
}
