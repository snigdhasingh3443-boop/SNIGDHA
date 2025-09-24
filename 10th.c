// Program to check whether a number is even or odd
// Developed by: snigdha
// Date: 02/09/25

#include <stdio.h>

int main()
{
    int n;

    printf("Enter value of n: ");
    scanf("%d", &n);

    if (n % 2 == 0)
    {
        printf("%d is Even\n", n);
    }
    else
    {
        printf("%d is Odd\n", n);
    }

    return 0;
}
