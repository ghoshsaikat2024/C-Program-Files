#include<stdio.h>
int min(int,int);
int main()
{
    int x,y,c,hcf,i,p;
    printf("enter any two numbers=");
	scanf("%d%d",&x,&y);
	c=min(x,y);                             //we can find the minimum without creating any function just by using condition statement like...
	if (x%c==0&&y%c==0)                     // c=(x<y)?x:y;
	{
	    hcf=c;
	    printf("HCF of %d and %d is=%d",x,y,hcf);
	}
	else
	{
	    for(i=1;i<c;i++)
	    {
	        if (x%i==0&&y%i==0)
	        {
	            p=i;
	        }
	        hcf=p;
	    }
	    printf("HCF of %d and %d is =%d",x,y,hcf);
	}
	return 0;
}
 
int min(int a,int b)
{
	int min;
	if (a<b)
	{
		min=a;
	}
	else
	{
		min=b;
	}
	return (min);
} 	
	
	
