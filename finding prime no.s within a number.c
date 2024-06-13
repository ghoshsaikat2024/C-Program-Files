#include<stdio.h>
int main()
{
    int i,n,j,p=0;
    printf("enter the number=");             //Program to find out whether a number is prime or not.
    scanf("%d",&n);
    for (i=2;i<=n;i++)
    {
        for(j=2;j<=i;j++)
        {
            if(i%j==0)
            {
                break;
            }
        }
        if (j==i)
        {
        	p++;
            printf("%d is a prime number.\n",i);
        }
    }
    printf("Total no of prime numbers within %d is = %d",n,p);
       
   
    
}
