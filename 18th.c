// Program to Check if number is greater than 9 and less than 100
//develpoed by snigdha
//date 18/9/25
#include <stdio.h>

int main(void) {
    int num;
    printf("Enter your number: ");
    scanf("%d", &num);

    if (num > 9 && num < 100) {
        printf("Number is between 10 and 99\n");
    } else {
        printf("Number is not between 10 and 99\n");
    }


}
