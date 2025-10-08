//print reverse of a number
//developed by snigdha
//date 8/10/25
#include<stdio.h>
void main()
{
    int reverse,n;
    printf("enter a number :");
    scanf ("%d ,&n");
    {
        int rev = 0;
        while(n>0)
        {
            rev = rev* 10 + n% 10;
            n=n/10;
        }
        printf("%d",rev);
    }
}

