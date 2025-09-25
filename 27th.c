//program to take character as input
// developed by snigdha
// date 24/9/25
#include <stdio.h>
void main ()
{
    char ch;
    printf("Enter your charcter:");
    scanf("%c , &ch");
    switch(ch)
    {
        case'a':printf("its a vowel");
        break;
        case'e':printf("its a vowel");
        break;
        case'i':printf("its a vowel");
        break;
        case'o':printf("its a vowel");
        break;
        case'u':printf("its a vowel");
        break;
        default:
        if((ch>='0')&&(ch<='9'))
        {
            printf("%c is a digit",ch);
        }
        else if ((ch>='a')&&(ch<<='Z'))
        {
            printf("its neither a digit nor a consonant");
        }
    }
}
