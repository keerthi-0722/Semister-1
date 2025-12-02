#include<stdio.h>
int main()
{
	int i=10;
	printf(" while loop:\n");
	while(i<5)
	{
		printf("i=%d\n",i);
	}
	printf("do while loop:\n");
	do 
	{
		printf("i=%d\n",i);
	}
	while(i<5);
	return 0;
}
