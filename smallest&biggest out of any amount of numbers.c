#include<stdio.h>
#include<string.h>       //smallest and biggest number out any amount of numbers.
int main()
{
	int x,n[x],j,i,min,max;
	printf("how many numbers do you want to type=");
	scanf("%d",&x);
	printf("enter %d numbers=",x);
	for(j=0;j<x;j++)
	{
		scanf("%d",&n[j]);
	
	}
	min=n[0];
	for (i=1;i<x;i++)
	{
		if (n[i]<min)
		{
			min=n[i];
		}
	}
	max=n[0];
	for (i=1;i<x;i++)
	{
		if (max<=n[i])
		{
			max=n[i];
		}
	}
	
	printf("biggest number is=%d",max);
	printf("\nsmallest number is=%d",min);
	return 0;
	
	
}
