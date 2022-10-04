#include<stdio.h>
int main()
{
    int n,i,loc,a[100],low,mid,high,key;
    printf("enter the size of array :\n");
    scanf("%d",&n);
    printf("enter the array elements :\n");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("enter the key :\n");
    scanf("%d",&key);
    loc=-1,low=0,high=n-1;
    while(low<=high)
    {
        mid=(low+high)/2;
        if(key==a[mid])
        {
            loc=mid+1;
            break;
        }
        else if(key<a[mid])
        {   
            high=mid-1;
        }
        else
        {
            low=mid+1;
        }
    }
if(loc>=0)
printf("element is found in the location %d",loc);
else
printf("element is not found ");

}