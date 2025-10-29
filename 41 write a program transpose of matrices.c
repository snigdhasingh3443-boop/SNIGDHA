//program to print a transpose of matrices
//developed by snigdha
//date 29/10/25
#include <stdio.h>

void main() 
{
    int a[3][3];
    printf("Enter 3x3 matrix:\n");
    for(int i = 0; i < 3; i++)
        for(int j = 0; j < 3; j++)
            scanf("%d", &a[i][j]);

    printf("\nTranspose of the matrix:\n");
    for(int i = 0; i < 3; i++) 
    {
        for(int j = 0; j < 3; j++) 
        {
            printf("%d ", a[j][i]);
        }
        printf("\n");
    }


}

