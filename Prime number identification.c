#include<stdio.h>
int main()
{
    int i,c=0,n;
    printf("enter the number=");             //Program to find out whether a number is prime or not.
    scanf("%d",&n);
    for (i=1;i<=n;i++)
    {
        if(n%i==0)
        {
            c++;
        }
    }
    if (c==2)
    {
        printf("%d is a prime number",n);
    }
    else
    {
        printf("%d is a composite number",n);
    }
    
}
