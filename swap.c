#include<stdio.h>
int add(int *x,int *y);
int main()
{
    int x,y;
    printf("enter the value x and y:\n");
    scanf("%d%d",&x,&y);
    printf("before swapping \nx=%d \ny=%d\n",x,y);
    add(&x,&y);
    printf("after swapping\n x=%d \n y=%d",x,y);
    return 0;
}
int add(int *x,int *y)
{
    int temp;
    temp=*x;
    *x=*y;
    *y=temp;
}