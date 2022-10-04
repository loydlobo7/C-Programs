#include<stdio.h>
#include<math.h>
int main()
{
    float a,b,c,d,r1,r2;
    printf("Enter a,b,c : ");
    scanf("%f%f%f",&a,&b,&c);
    d=(b*b)-(4*a*c);
    if(d==0)
    {
        printf("Roots are equal\n");
        r1=-b/(2*a);
        r2=r1;
       printf("The roots r1 = %f\tr2 = %f",r1,r2);
    }
    else if(d>0)
    {
        printf("Roots are real and distinct\n");
        r1=(-b+sqrt(d))/(2*a);
        r2=(-b-sqrt(d))/(2*a);
        printf("Roots are r1=%f\tr2=%f",r1,r2);
    }
    else
    {
        printf("Roots are real and complex ");
        r1=-b/(2*a);//real part of complex
        r2=sqrt(fabs(d))/(2*a);//imaginary part
        printf("Roots are r1=%f+i%f\tr2=%f+i%f",r1,r2,r1,r2);
    }
}