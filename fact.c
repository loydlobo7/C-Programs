#include<stdio.h>
int factorial(int n);
int main()
{
    int n;
    printf("Enter the number : ");
    scanf("%d",&n);
    printf("%d is the factorial of %d",factorial(n),n);
    
}
int factorial(int n)
{
    if(n==0 || n==1)
    return n;
    else
    return n*factorial(n-1);
}