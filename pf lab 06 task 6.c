#include<stdio.h>
int main()
{
	int i;
	int num=0;
	int reversed=0;
	printf("\n enter a series of number:");
	scanf("%d",&num);
	while(num!=0)
    {
    	i=num%10;
    	reversed=reversed*10+i;
    	num=num/10;
	}
	printf("\n the reversed result is:%d",reversed);
	return 0;
}
