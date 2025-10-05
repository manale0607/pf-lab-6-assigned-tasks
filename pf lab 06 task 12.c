#include<stdio.h>
int main()
{
	int num;
	printf("\n enter the number:");
	scanf("%d",&num);
	if(num&1)
	   printf("\n number is %d odd",num);
	else 
	   printf("\n number is %d even",num);
	return 0;
}
