#include<stdio.h>
int main()
{
    int a,b,c;
    printf("enter a=");
    scanf("%d",&a);
    printf("enter b=");
    scanf("%d",&b);
    printf("enter c=");
    scanf("%d",&c);
    if (a>b&&a>c)
    {
        printf("a=%d is the greatest no of all.",a);
    }
    else if(b>c)
    {
        printf("b=%d is the greatest no of all.",b);
    }
    else if(c>b)
    {
        printf("c=%d is the greatest no of all.",c);
    }
}    
