//program to print factors of a number
// devlopd by snigdha
// date 8/10/25
#include<stdio.h>
void main()
{
    int num ,i,count = 0;
    printf("enter a number :");
    scanf("%d", &num);
    printf ("factor of %d are : ",num);
    for(i=1; i<=num ; i++)
    {
        if(num% i ==0)
           {
              printf("%d" ,i);
                count ++;
           }
    }
    printf("\n Total number of facctors :%d\n ", count);
}
