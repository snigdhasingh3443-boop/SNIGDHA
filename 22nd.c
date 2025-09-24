//program to print multiplication table of a number
//developed by snigdha
//date 11/9/25

#include <stdio.h>

int main(void) {
    int n;
    printf("Enter value of n: ");
    scanf("%d", &n);

    printf("Multiplication table of %d:\n", n);
    for (int i = 1; i <= 10; i++)
    {
        printf("%d x %d = %d\n", n, i, n * i);
    }


}
