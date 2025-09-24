// Program to find maximum of 2 numbers using conditional operator
// Developed by: snigdha
// Date: 12/09/25

#include <stdio.h>

int main()
{
    int a, b;

    printf("Enter the two numbers: ");
    scanf("%d %d", &a, &b);

    printf("The maximum number of %d and %d is: %d\n", a, b, (a > b ? a : b));


}
