//program to print factorial of a number
//developed by snigdha
// date 8/10/25
#include<stdio.h>
void main()
{
    int n,factorial=1;
    printf("enter the number :");
    scanf("%d",&n);
    for (int i=1; i<=n ;i++)
    {
        factorial = factorial*i;
    }
        printf("factorial of %d is %d",n,factorial);
}
