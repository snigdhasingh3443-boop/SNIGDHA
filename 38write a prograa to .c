#include <stdio.h>

void main() 
{
    int arr[10], key, found = 0;

    printf("Enter 10 integers:\n");
    for(int i = 0; i < 10; i++)
        scanf("%d", &arr[i]);

    printf("Enter key to search: ");
    scanf("%d", &key);

    for(int i = 0; i < 10; i++)
        {
        if(arr[i] == key)
        {
            printf("Key found at position %d\n", i + 1);
            found = 1;
            break;
        }
    }

    if(!found)
        printf("Key not found.\n");

}

