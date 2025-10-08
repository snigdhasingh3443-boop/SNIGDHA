//check whether number is palidromeor not
//developed by snigdha
//date 8/10/25
#include<stdio.h>
void main()
{
    int num ,reverse=0,reminder,original;
    printf("enter the number :");
    scanf("%d", & num);
    original=num;
    while(num != 0)
    {
    reminder=num%10;
    reverse= reverse*10+reminder;
    num /=10 ;
    }
    if(original==reverse)
        printf("%d is a palindrome. \n",original);
    else
        printf("%d is not a palindrome. \n",original);

}
