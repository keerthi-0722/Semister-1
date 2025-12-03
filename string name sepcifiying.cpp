#include<stdio.h>
#include<string.h>
int main()
{
	char name[10];
	printf("enter your name:");
	scanf("%s",name);
	printf("%s\n",name);
	
	getchar();
	
	char full_name[10];
	printf("Enter full name:");
	scanf(" %s[^\n]",full_name);
	printf("%s\n",full_name);
}
