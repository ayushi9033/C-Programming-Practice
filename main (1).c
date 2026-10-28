//write a program to identify if a character is capital, small, digit or special character.
#include <stdio.h>

int main()
{
    char ch;
    printf("enter character:");
    scanf("%c",&ch);
    if(ch>='A' && ch<='Z')
    {
        printf("Character is capital");
    }
    else if(ch>='a' && ch<='z')
    {
        printf("Character is small");
    }
    else if(ch>='0' && ch<='9')
    {
        printf("Character is digit");
    }
    else
    {
        printf("character is special character");
    }
    return 0;
}