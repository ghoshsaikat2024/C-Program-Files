#include<stdio.h>
int main()
{
    int n=10,i,j;
    for(i=1;i<5;i++)
    {
        for (j=i;j<=5;j++)
        {
            printf("  ");
        }
        for (j=1;j<=i;j++)
        {
            printf("* ");
        }
        for (j=1;j<i;j++)
        {
            printf("* ");
        }
        printf("\n");
    }
     for (i=6;i<=n;i++)    
     {    
         for (j=6;j<=i;j++)
        {
            printf("  ");
        }
        for (j=i;j<=n;j++)
        {
            printf("* ");
        }
        for (j=i;j<n;j++)
        {
            printf("* ");
        }
        printf("\n");
     }
}
