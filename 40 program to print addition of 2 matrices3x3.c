//program to print addition of 2 matrices 3x3
//developed by snigdha
//date 29/10/25
#include <stdio.h>

void main() 
{
    int a[3][3], b[3][3], sum[3][3];
    printf("Enter first 3x3 matrix:\n");
    for(int i = 0; i < 3; i++)
        for(int j = 0; j < 3; j++)
            scanf("%d", &a[i][j]);

    printf("Enter second 3x3 matrix:\n");
    for(int i = 0; i < 3; i++)
        for(int j = 0; j < 3; j++)
            scanf("%d", &b[i][j]);

    printf("\nSum of matrices:\n");
    for(int i = 0; i < 3; i++) 
    {
        for(int j = 0; j < 3; j++) 
        {
            sum[i][j] = a[i][j] + b[i][j];
            printf("%d ", sum[i][j]);
        }
        printf("\n");
    }

}

