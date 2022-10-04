#include<stdio.h>
int main()
{
    int n,i,a[100],sum=0;
    int *ptr;
    printf("enter the n of elements \n");
    scanf("%d",&n);
    printf("Enter the number\n");
    for(i=0;i<n;i++)
    {
    scanf("%d",&a[i]);
    }
    ptr=a;
    for(i=0;i<n;i++)
    {
        sum+=*ptr;
        ptr++;
    }
    printf("%d is the sum",sum);
}