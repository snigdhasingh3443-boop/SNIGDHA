// Program to check whether a year is a leap year or not
// Developed by: snigdha
// Date: 11/09/25

#include <stdio.h>

int main()
{
    int year;

    printf("Enter a year: ");
    scanf("%d", &year);

    if ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0))
    {
        printf("%d is a Leap Year\n", year);
    }
    else
    {
        printf("%d is Not a Leap Year\n", year);
    }


}
