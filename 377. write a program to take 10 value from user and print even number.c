//program to take 10 value from user an print even number
// developed by snigdha
// date 29/10/25
#include <stdio.h>

int main() {
    int arr[10];
    printf("Enter 10 integers:\n");
    for(int i = 0; i < 10; i++) {
        scanf("%d", &arr[i]);
    }

    printf("\nEven numbers are:\n");
    for(int i = 0; i < 10; i++) {
        if(arr[i] % 2 == 0)
            printf("%d ", arr[i]);
    }
    return 0;
}
