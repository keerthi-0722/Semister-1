#include<stdio.h>
int main()
{
	int num;
	printf("enter a num");
	scanf("%d",&num);
	if(num>0)
	{
		printf("%d is a positive",num);
	}
	else if(num<0)
	{
		printf("%d is a negative num",num);
	}
	else
	{
		printf("%d is zero",num);
	}
	return 0;
}
