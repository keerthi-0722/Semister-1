#include<stdio.h>
int main()
{
	float s = 7;
	float perimeter;
	float  area;
	perimeter = 4*s;
	area = s*s ;
	printf("enter the value s");
	scanf("%f",s);
	printf("area of the square is %2f/n",area);
	printf("perimeter of the square is %2f/n",perimeter);
	return 0;
}
