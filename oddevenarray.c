#include<stdio.h>
int main()
{
    int n,i,a[10];
    int even_sum=0,odd_sum=0;
    printf("enter the size of even and odd integers\n");
    scanf("%d",&n);
    printf("enter the array elements \n");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++)
    {
        if(a[i]%2==0)
        {
            even_sum+=a[i];
        }
        else
        {
            odd_sum+=a[i];
        }
    }
    printf("the sum of even numbers is %d \n",even_sum);
    printf("sum of all odd numbers is %d \n",odd_sum);
}