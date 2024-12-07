#include<stdio.h>
void main()
{
    int rows=0;
    printf("enter the row numbers:");
    scanf("%d",&rows);for(int i=1;i<=rows;i++)
{
    for(int j=1;j<=i;j++)
    {
        printf("*");
    }
    printf("\n");
}
}