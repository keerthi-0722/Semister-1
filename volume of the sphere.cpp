#include<stdio.h>
main()
{
	int radius;
	float PI;
	char volume;
	PI=3.14;
	printf("enter the value of radius");
    volume = 4/3*PI*radius*radius*radius;
	scanf("%f",radius);
	printf("the volume of the sphere with radius %2fis %2f/n",radius,volume);
		return 0;
}
