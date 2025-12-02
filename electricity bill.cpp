//write a c program to print amount of electricity bill
#include<stdio.h>
int main()
{
	int units,price,amount;
	printf("enter number of  unit consumed: ");
	scanf("%d",&units);
	if(units<=50)
	{
		price=20;
	}
	else if(units<=100)
	{
		price=30;
	}
	else if(units<=200)
	{
		price=40;
	}
	else
	{
		price=50;
	}
	amount=units*price;
	printf("amount is %d",amount);
	return 0;
}
