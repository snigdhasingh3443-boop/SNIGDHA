// Program to find sum of n natural numbers
// Developed by Snigdha Singh
//  Date: 11/09/25
#include <stdio.h>

int main(void) {
    int i, n, sum = 0;

    printf("Enter value of n: ");
    scanf("%d", &n);

    for (i = 1; i <= n; i++)
    {
        sum = sum + i;
    }

    printf("Sum = %d\n", sum);

}
