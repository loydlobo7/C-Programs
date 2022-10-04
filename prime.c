#include<stdio.h>
#include<stdlib.h>
int main()
{
    int m,n,i,j;
    printf("enter the min value:");
    scanf("%d",&m);
    printf("enter the max value:");
    scanf("%d",&n);
    for(i=m;i<=n;i++)
    {
        for(j=2;j<=i;j++)
        {
            if(i%j==0)
            {
                break;
            }
        }
        if(i==j)
        {
            printf("%d is the prime number\n",i);
        }
    }

}