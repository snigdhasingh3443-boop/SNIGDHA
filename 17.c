// Program to Swap values of two variables
//developed by snigdha
//date 11/9/25
#include <stdio.h>

int main(void) {
    int a, b, temp;

    printf("Enter value of a: ");
    scanf("%d", &a);
    printf("Enter value of b: ");
    scanf("%d", &b);

    temp = a;
    a = b;
    b = temp;

    printf("After swapping:\n");
    printf("a = %d\n", a);
    printf("b = %d\n", b);


}
