#include<stdio.h>
int main()
{
	int i,fact=1,num;
	printf("\n enter the number:");
	scanf("%d",&num);
	for(i=1;i<=num;i++)
	{
		fact=fact*i;
	}
	printf("\n the factorial of %d is %d",num,fact);
	return 0;
}
