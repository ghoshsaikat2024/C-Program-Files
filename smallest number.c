#include<stdio.h>
#include<string.h>
int main()
{
	int n[5],i,min;
	printf("enter 5 numbers=");
	for(i=0;i<5;i++)
	{
		scanf("%d",&n[i]);
	}
	min=n[0];
	for (i=1;i<5;i++)
	{
		if (n[i]<min)
		{
			min=n[i];
		}
	}
	printf("smallest number is=%d",min);
	return 0;
	
	
}
