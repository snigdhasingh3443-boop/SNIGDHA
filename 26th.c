// Program to calculate simple interest for three sets of values
// Developed by Snigdha Singh      Date: 11/09/25
#include <stdio.h>

int main(void) {
    float p, r, t, si;
    int i;

    for (i = 1; i <= 3; i++) {
        printf("\n Set %d \n", i);
        printf("Enter Principal, Rate of Interest, and Time: ");
        scanf("%f %f %f", &p, &r, &t);

        si = (p * r * t) / 100.0;
        printf("Simple Interest = %.2f\n", si);
    }
}
