//program to get product of two number
//developed by snigdha
//date 11/9/25
#include <stdio.h>

int main(void) {
    int num1, num2;
    printf("Enter the first integer: ");
    if (scanf("%d", &num1) != 1) { printf("Invalid input.\n"); return 1; }
    printf("Enter the second integer: ");
    if (scanf("%d", &num2) != 1) { printf("Invalid input.\n"); return 1; }

    long product = (long)num1 * (long)num2;
    printf("%d and %d -> product = %ld\n", num1, num2, product);


}
