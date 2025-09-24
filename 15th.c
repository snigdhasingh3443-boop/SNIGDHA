// Program to perfrom artmatical operation
// developed by snigdha singh
// date 12/9/25
#include <stdio.h>

int main(void) {
    int a, b;
    printf("Enter two integers separated by space: ");
    if (scanf("%d %d", &a, &b) != 2) {
        printf("Invalid input.\n");
        return 1;
    }

    printf("%d + %d = %d\n", a, b, a + b);
    printf("%d - %d = %d\n", a, b, a - b);
    printf("%d * %d = %d\n", a, b, a * b);

    if (b != 0) {
        printf("%d / %d = %d (integer division)\n", a, b, a / b);
        printf("%d %% %d = %d (remainder)\n", a, b, a % b);
    } else {
        printf("Division and modulus by zero are not allowed.\n");
    }


}
