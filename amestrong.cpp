#include<stdio.h>
int main()
{
	int num,sum,rem,number;
	printf("enter a 3 digit number:");
	scanf("%d",&num);
	num = number;
	sum=0;
	while(num!=0)
	{
		rem= num % 10;
	    sum = sum+(rem*rem*rem);
		num=num/10;
		
	}
	
	if(number==sum)
	{
	printf("it is an amestrong");
    }
    else
    {
    	printf("it is not an amestrong");
	}
	return 0;
}
