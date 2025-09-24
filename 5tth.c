// Program to accept one number and check whether it is divisible by 3 and 5 or not
// Developed by snigdha
// Date: 11/09/2025

#include <stdio.h>

int main()
{
    int a;

    printf("Enter any number: ");
    scanf("%d", &a);

    if (a % 3 == 0 && a % 5 == 0)
        printf("Divisible by 3 and 5\n");
    else
        printf("Not divisible by 3 and 5\n");

}
