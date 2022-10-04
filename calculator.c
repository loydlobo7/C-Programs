#include<stdio.h>
#include<stdlib.h>
int main()
{
    char operator;
    float num1,num2,result=0;
    printf("enter the opertaor\n");
    scanf("%c",&operator);
    printf("enter two numbers");
    scanf("%f%f",&num1,&num2);
    
    switch (operator)
    {
        case'+':
        result=num1+num2;
        break;
        case'-':
        result=num1-num2;
        break;
        case'*':
        result=num1*num2;
        break;
        case'/':
        if(num2==0)
        {
            printf("division is not possible\n");
            exit(0); 
        }
        else
        result=num1/num2;
        break;
        default :
        printf("invalid operator\n");
        exit(0);
    }
    printf("the value is %f",result);
    return 0;
}