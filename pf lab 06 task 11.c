#include<stdio.h>
#include<math.h>
int main()
{
	float angle,h,new_angle,l;
	const float pi=3.142;
	printf("\n enter value of height:");
	scanf("%f",&h);
	printf("\n enter the angle:");
	scanf("%f",&angle);
	new_angle=angle*pi/180;
	l=h/tan(new_angle);
	printf("\n value of l is:%f",l);
	return 0;
}
