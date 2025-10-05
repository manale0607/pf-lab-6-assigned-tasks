#include<stdio.h> 
#include<math.h>
int main()
{
	int people;
	double total,per_person=250.50;
	printf("\n enter number of people:");
	scanf("%d",&people);
	total=people*per_person;
	printf("\n the total is:%lf",&total);
	return 0;
}
