#include<stdio.h>
int main()
{
    int i,m,n,j,p=0;
    printf("enter the two numbers between which you want to find prime numbers=");        
    scanf("%d%d",&m,&n);
    for (i=m;i<=n;i++)
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
    printf("Total no of prime numbers within %d and %d is = %d",m,n,p);
       
   
    //Here the the value we will get will be including the typed numbers m,n.
}
