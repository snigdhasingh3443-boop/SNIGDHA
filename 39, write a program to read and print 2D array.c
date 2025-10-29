// program to read and print 2D  array
// developed by snigdha
//date 29/10/25
#include <stdio.h>

void main()
{
    int arr[3][3];
    printf("Enter elements of 3x3 matrix:\n");
    for(int i = 0; i < 3; i++)
   {
        for(int j = 0; j < 3; j++)
        {
            scanf("%d", &arr[i][j]);
        }
    }

    printf("\nMatrix is:\n");
    for(int i = 0; i < 3; i++)
        {
        for(int j = 0; j < 3; j++)
            {
            printf("%d ", arr[i][j]);
           }
        printf("\n");
    }


}

