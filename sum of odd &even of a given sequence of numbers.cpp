#include<stdio.h>
#include<string.h>
int main()
{
	int x,i,even_sum=0,odd_sum=0,N[x],e=0,o=0;
	printf("how many numbers you want to type=");
	scanf("%d",&x);
	printf("enter the numbers=");
	for(i=0;i<x;i++)
	{
		scanf("%d",&N[i]);
	}
	for (i=0;i<x;i++)
	{
		if(N[i]%2==0)
		{
			even_sum+=N[i];
			printf("%d is a even number\n",N[i]);
			e++;
		}
		else
		{
			odd_sum+=N[i];
			printf("%d is a odd number\n",N[i]);
			o++;
		}
		
	}
	printf("there are total %d even numbers & %d odd numbers in the sequence.",e,o);
	printf("\nsum of all the even numbers is=%d",even_sum);
	printf("\nsum of all the odd numbers is=%d",odd_sum);
	
	
	
	
	
	
return 0;
	
	
}
