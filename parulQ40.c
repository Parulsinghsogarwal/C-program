#include<stdio.h>
#include<math.h>
int main()
{
	float xp,yp,xq,yq,slope,angle;
	printf("Enter the value for 1st point (xp,yp)");
	scanf("%d %d",&xp,&yp);
	printf("Enter the value for 1st point (xq,yq)");
	scanf("%d %d",&xq,&yq);
	slope=(yq-yp)/(xq-xp);
	angle=atan(slope);
	angle=angle*180/3.14159265359;
	printf("slope=%.2f\nangle=%.2f°",slope,angle);
	return 0;
}