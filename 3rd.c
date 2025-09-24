// Program to find area and perimeter of rectangle
// Developed by snigdha
// Date: 27/08/2025

#include <stdio.h>

int main()
{
    float length, breadth, area, perimeter;

    printf("Enter the length of rectangle: ");
    scanf("%f", &length);

    printf("Enter the breadth of rectangle: ");
    scanf("%f", &breadth);

    area = length * breadth;
    perimeter = 2 * (length + breadth);

    printf("Area of the rectangle = %.2f\n", area);
    printf("Perimeter of the rectangle = %.2f\n", perimeter);


}
