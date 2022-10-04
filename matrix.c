#include<stdio.h>
#include<stdlib.h>
void main()
{
    int r1,r2,c1,c2,i,j,k,a[10][10],b[10][10],c[10][10];
    printf("Enter rows and columns of first matrix : \n");
    scanf("%d%d",&r1,&c2);
    printf("Enter rows and columns of second matrix : \n");
    scanf("%d%d",&r2,&c2);
    printf("Enter matrix A : ");
    for(i=0;i<r1;i++)
    {
        for(j=0;j<c1;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
    printf("Enter matrix B : ");
    for(int i=0;i<r2;i++)
    {
        for(int j=0;j<c2;j++)
        {
            scanf("%d",&b[i][j]);
        }
    }
    for(i=0;i<r1;i++)
    {
        for(j=0;j<c2;j++)
        {
            c[i][j]=0;
            for(k=0;k<c1;k++)
            {
            c[i][j]+=a[i][k]*b[k][j];
            }
        }
    }
    printf("Matrix A\n");
    for(i=0;i<r1;i++)
    {
        for(int j=0;j<c1;j++)
        {
            scanf("%d",&a[i][j]);
        }
         printf("\n");
    }
     printf("Matrix B\n");
    for(int i=0;i<r2;i++)
    {
        for(int j=0;j<c2;j++)
        {
            scanf("%d",&b[i][j]);
        }
         printf("\n");
    }
    printf("Resultant Matrix\n");
    for(i=0;i<r1;i++)
    {
        for(j=0;j<c2;j++)
        {
            
            printf("%d\t",c[i][j]);
        }
    }
    printf("\n");
   
}