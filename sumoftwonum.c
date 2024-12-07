#include<stdio.h>
int sum(int,int);//function declaration
int sub(int,int);
int main()
{
    int a=0;
    int b=0;
    int total=0;
    printf("Enter a first number");
    scanf("%d",&a);
    printf("Enter second number:");
    scanf("%d",&b);
    total=sum(a,b);//function calling
    printf("Sum is:%d",total);
    return 0;
}
int sum(int a,int b){//function definition
int s=0;
s=a+b;
return s;
}