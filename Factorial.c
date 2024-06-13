#include<stdio.h>
int main()
{
    int n,factorial=1,i;
    printf("enter the number=");
    scanf("%d",&n);
    for (i=1;i<=n;i++)
    {
        factorial*=i;
    }
    printf("the factorial of %d is =%d",n,factorial);
}    
