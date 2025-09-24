// program to get a  number 1-7 from user and point corresponding of the week
// developed by snigdha
//date 11/9/25
#include <stdio.h>

int main(void) {
    int n;
    printf("Enter a number (1-7): ");
    if (scanf("%d", &n) != 1) {
        printf("Invalid input.\n");
        return 1;
    }

    switch (n) {
        case 1: printf("Monday\n");    break;
        case 2: printf("Tuesday\n");   break;
        case 3: printf("Wednesday\n"); break;
        case 4: printf("Thursday\n");  break;
        case 5: printf("Friday\n");    break;
        case 6: printf("Saturday\n");  break;
        case 7: printf("Sunday\n");    break;
        default: printf("Not a valid input (enter 1-7).\n"); break;
    }


}
