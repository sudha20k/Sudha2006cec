#include<stdio.h>
void main()
{
    int rows=0;
    printf("Enter row number:");
    scanf("%d",&rows);
    int spc=rows+4-1;       //5+4-1=7-1=6-1=5
    for(int i=1;i<=rows;i++)//i=3
    {
        for(int j=spc;j>0;j--)//i=3,j=1,2,3
        {
            printf("-");
        }
        for(int j=1;j<=i;j++)//i=3,j=1,2,3
        {
            printf("*");
        }
        printf("\n");
        spc--;
    }
}
