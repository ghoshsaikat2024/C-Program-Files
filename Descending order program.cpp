//Descending order program.
#include<stdio.h>
#include<math.h>

int main()
{
	float x[20],temp;
	int n,i,j;
	printf("Enter number of elements:");
	scanf("%d",&n);
	printf("No. of elements:%d\n",n);
	for (i=1;i<=n;i++)
	{
		scanf("\n%f",&x[i]);
	}
	for (i=1;i<=n;i++)
	{
		for(j=1;j<=n;j++)
		{
			if (x[j]<x[i])
			{
				temp = x[i];
				x[i]=x[j];
				x[j]=temp;
			}
		}
	}
	printf("Numbers in descending order:%f");
	for(i=1;i<=n;i++)
	{
		printf("%f\t",x[i]);
	}
	return 0;
}
