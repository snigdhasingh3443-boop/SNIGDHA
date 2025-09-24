// Program to check eligibility to vote
// Developed by: snigdha
// Date: 01/01/25

#include <stdio.h>

int main()
{
    int age;

    printf("Enter your age: ");
    scanf("%d", &age);

    if (age >= 18)
    {
        printf("You are eligible to vote\n");
    }
    else
    {
        printf("You are not eligible to vote\n");
    }

}
