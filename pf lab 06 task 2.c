#include<stdio.h>
int main()
{
	int n,a,i;
	printf("\n enter your number:");
	scanf("%d",&n);
	for(i=1;i<=10;i++)
	{
		a=i*n;
		printf("\n %d X %d = %d",n,i,a);
	}
	return 0;
}
