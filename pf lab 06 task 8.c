#include<stdio.h>
#include<math.h>
int main()
{
	double I,S,M;
	printf("\n enter value of I:");
	scanf("%lf",&I);
	printf("\n enter value of S:");
	scanf("%lf",&S);
	M= log10 (I/S);
	printf("\n the magnitude of eaethquake is:%lf",M);
	return 0;
}
