// Program to find product of n natural numbers
// Developed by Snigdha Singh
// Date: 11/09/25
#include <stdio.h>

int main(void) {
    int i, n;
    long long product = 1;   // safer for big results

    printf("Enter value of n: ");
    scanf("%d", &n);

    for (i = 1; i <= n; i++)
    {
        product = product * i;
    }

    printf("Product = %lld\n", product);

}
