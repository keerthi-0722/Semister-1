#include<stdio.h>
int main()
{
	int key,i,roll_num[59],n;
	printf("enter n value");
	scanf("%d",&n);
	for (i=0;i<=n;i++)
	{
		scanf("%d",&roll_num[59]);
	}
	printf("enter key value");
	scanf("%d",&key);
	for(i=0;i<n;i++)
	{
		if(key==roll_num[59])
		{
			printf("element found at index is %d",i);
			break;	
		}
	}
return 0;
}
