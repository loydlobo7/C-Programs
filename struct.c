#include<stdio.h>
struct student
{
    char name[20];
    int roll_no;
    int marks[5];
    int sum;
};
int main()
{
    int n,i,j,class_tot=0,class_avg;
    struct student s[20];
    printf("Enter the number of students : ");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        printf("Enter details of student %d\n",i+1);
        printf("Enter name : ");
        scanf("%s",s[i].name);
        printf("Roll no. : ");
        scanf("%d",&s[i].roll_no);
        printf("Enter Marks \n");
        s[i].sum=0;
        for(j=0;j<5;j++)
        {
            printf("Mark %d : ",j+1);
            scanf("%d",&s[i].marks[j]);
            s[i].sum+=s[i].marks[j];
        }
        class_tot+=s[i].sum;
    }
    class_avg=class_tot/n;
    for(i=0;i<n;i++)
    {
        if(s[i].sum>class_avg)
        printf("%s scored above average\n ",s[i].name);
        else
        printf("%s scored below average\n ",s[i].name);
    }
}