#include<stdio.h>
#include<math.h>
 int main()
 {
 	int p=5900;
	int t=2;
	int r=2;
	int CI=p*(pow(1+r/100,t)-1);
 	printf("compound intrest is :%d,CI");
 	return 0;
 }
