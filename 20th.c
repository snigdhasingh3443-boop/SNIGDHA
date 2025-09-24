// Program to check if number is negative, positive, or zero
#include <stdio.h>

int main(void) {
    int x;
    printf("Enter value of x: ");
    scanf("%d", &x);

    if (x == 0) {
        printf("x is zero\n");
    } else if (x < 0) {
        printf("x is negative\n");
    } else {
        printf("x is positive\n");
    }
}
