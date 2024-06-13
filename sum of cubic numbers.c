#include<stdio.h>
int main()
{
    int i,sum=0,n;
    printf("enter the number=");
    scanf("%d",&n);
    for (i=1;i<=n;i++)
    {
        sum+=(i*i*i);
    }
    printf("The sum of all the cubic values upto %d is =%d",n,sum);
}
