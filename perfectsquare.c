#include<stdio.h>
void main()
{
    int number=0;
    printf("Enter a number:");
    scanf("%d",&number);
    int flag=0;
    for(int i=0;i<=number;i++)
{
    if(i*1==number)
    {
        flag=1;
        break;
    }
    else{
        flag=0;
    }
}
if (flag==1)
{
    printf("is a perfect square number");
}
else{
    printf("is not a perfect square number");
}
}