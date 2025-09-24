//program to print first n natural numbers
//developed by snigdha
//date 12/9/25
#include <stdio.h>

int main(void) {
    int n;
    printf("Enter value of n: ");
    scanf("%d", &n);

    printf("First %d natural numbers:\n", n);
    for (int counter = 1; counter <= n; counter++) {
        printf("%d\n", counter);
    }


}
