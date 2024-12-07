#include<stdio.h>
void main()
{
    int number=0;
    printf("Enter a number:");
    scanf("%d",&number);
    if(number>=1 && number<=12)
    {
        printf("valid month number");
    }
    else
    {
        printf("invalid month number");
    }
}