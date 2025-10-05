#include<stdio.h>
int main()
{
	int i,sum=0;
	do
	{
		printf("\n enter number:");
		scanf("%d",&i);
		sum=sum+i;
	}
	while(i!=0);
	printf("\n total sum is:%d",sum);
	return 0;
}
