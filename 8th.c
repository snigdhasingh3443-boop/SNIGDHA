// Program to convert temperature from Celsius to Fahrenheit
// Developed by: snigdha
// Date: 27/08/25

#include <stdio.h>

int main()
{
    float celsius, fahrenheit;

    printf("Enter the temperature in Celsius: ");
    scanf("%f", &celsius);

    fahrenheit = (celsius * 9 / 5) + 32;

    printf("%.2f Celsius = %.2f Fahrenheit\n", celsius, fahrenheit);

    return 0;
}
