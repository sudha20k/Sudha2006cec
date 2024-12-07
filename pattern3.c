#include<stdio.h>
void main()
{
    int rows=0;
    printf("enter the rows:");
    scanf("%d",&rows);
    for(int i=1;i<=rows;i++)//i=3
    {
        for(int j=1;j<=i;j++)//i=3,j=1,2,3
        {
            printf("%d",i);
        }
        printf("\n");
    }
}