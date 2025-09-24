// Program to find simple interest
// Developed by: snigdha
// Date: 11/09/25

#include <stdio.h>

int main()
{
    int p, r, t;   // p = principal, r = rate, t = time
    float SI;

    printf("Enter the values of P, R, and T: ");
    scanf("%d %d %d", &p, &r, &t);

    SI = (p * r * t) / 100.0;   // formula for simple interest

    printf("Simple Interest = %.2f\n", SI);

}
