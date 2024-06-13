#include<stdio.h>
int max(int,int);
int main()
{
	int x,y,c,lcm;
	printf("enter two numbers=");
	scanf("%d%d",&x,&y);
	c=max(x,y);                       // we can find the maximum without creating any function just by using condition statement like...
	if (c%x==0&&c%y==0)               //c=(x>y)?x:y;
	{
		lcm=c;
		printf("LCM of %d and %d is =%d",x,y,c);
	}
	else
	{
		lcm=x*y;
		printf("LCM of %d and %d is =%d",x,y,lcm);
	}
	return 0;
}
 
int max(int a,int b)
{
	int max;
	if (a>b)
	{
		max=a;
	}
	else
	{
		max=b;
	}
	return (max);
} 	
	
