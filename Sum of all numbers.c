#include<stdio.h>
int main()
{
    int n,sum=0,i;
    printf("enter how many numbers you want to sum=");
    scanf("%d",&n);
    for (i=1;i<=n;i++)
    {
        sum+=i;
    }
    printf("the sum of first %d numbers is=%d",n,sum);
}    
