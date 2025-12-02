#include<stdio.h>
int main()
{
	int a,b,c,max;
	printf("enter x,y,z values:");
	scanf("%d %d %d",&a,&b,&c);
	max = a>b?(a>c?a:c):(b>c?b:c);
	printf("largest number is:%d",max);
	return 0;
}
