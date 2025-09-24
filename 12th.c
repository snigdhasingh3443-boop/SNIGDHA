//program to find which of the 3 number is maximum
//developed by snigdha
//date 4/9/25
#include <stdio.h>

int main(void) {
    int a, b, c;
    printf("Enter three integers separated by spaces: ");
    if (scanf("%d %d %d", &a, &b, &c) != 3) {
        printf("Invalid input.\n");
        return 1;
    }

    if (a >= b) {
        if (a >= c)
            printf("%d is the largest number.\n", a);
        else
            printf("%d is the largest number.\n", c);
    } else {
        if (b >= c)
            printf("%d is the largest number.\n", b);
        else
            printf("%d is the largest number.\n", c);
    }


}
