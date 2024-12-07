#include<stdio.h>
void main() 
{
    char ch;
    printf("Enter a character:");
    scanf("%c", &ch);

    if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u') {
    printf("%c is a vowel", ch);
    }
    else if((ch >='a' && ch <='z')) 
    {
    printf("%c is a consonant", ch);
    } 
    else
    {
    printf("%c is not a valid letter",ch);
     }
}