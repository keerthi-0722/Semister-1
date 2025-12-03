#include<stdio.h>
int main()
{
	int i, n, minindex, temp, arr[10], j;
	printf("Enter n value");
	scanf("%d",&n);
	printf("Enter array elements:");
	for(i=0;i<n;i++)
	{
		scanf("%d",&arr[i]);
	}
	for(i=0;i<n-1;i++)
	{
		minindex=i;
		for(j=i+1;j<n;j++)
		{
			if(arr[j]<arr[minindex])
			minindex = j;
		}
	}
	if(minindex != i)
	{
		temp = arr[i];
		arr[i] = arr[minindex];
		arr[minindex] = temp;
	}
}
    printf("Sorted array:\n");
     for(i=0;i<n;i++)
     {
     	printf("%d ",arr[i]);
	 }
	 return 0;
}
