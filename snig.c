#include <stdio.h>
int main()
{
    float length,width,area,perimeter;
    printf("Enter the length of the rectangle :");
    scanf("%f",&length);
    printf("Enter the width of the rectangle:");
    scanf("%f", &width);
    // calculating area and perimeter
    area= length * width;
    perimeter = 2 * (length + width);
    printf("area of the rectangle =%.2f\n",area);
    printf("perimeter of the rectangle =%.2f\n",perimeter);
}
