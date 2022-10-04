#include<stdio.h>
int fibonacci(int n);
int main()
{
    int n,i;
    printf("enter the range of fibonacci serires: \n");
    scanf("%d",&n);
   printf("%d",fibonacci(n-1));
}
int fibonacci(int n)
{
    if(n==0 || n==1)
    return n;
    else
    return fibonacci(n-1)+fibonacci(n-2);
}