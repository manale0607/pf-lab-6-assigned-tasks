#include<stdio.h>
#include<math.h>
int main()
{
	int p,n,t,r;
	float a;
	printf("\n enter value of p:");
	scanf("%d",&p);
	printf("\n enter value of n:");
	scanf("%d",n);
	printf("\n enter value of r:");
	scanf("%d",&r);
	printf("\n enter value of t:");
	scanf("%d",&t);
	a=p*pow((1+r/n),n*t);
	printf("\n future value of investment is:%.2f",a);
	return 0;
}
