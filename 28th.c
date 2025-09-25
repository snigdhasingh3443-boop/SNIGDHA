//program to print number of days in a particular month
// developed by snigdha
// date 25/9/25
#include<stdio.h>
void main ()
{
    int choice;
    printf("Enter a number 1 to `12");
    scanf("%d",&choice);
    switch(choice)
    {
        case 1: printf ("31 days");
        break;
        case 2 :printf("28 days");
        break;
        case 3 :printf("31 days") ;
        break;
        case 4 :printf("30 days") ;
        break;
        case 5 : printf("31 days");
        break;
        case 6 :printf("30 days");
        break;
        case 7 : printf ("31 days");
        break;
        case 8 :printf("31days");
        break;
        case 9 :printf("30 days") ;
        break;
        case 10 :printf("31 days") ;
        break;
        case 11 : printf("30 days");
        break;
        case 12 :printf("31 days");
        break;
    }
}
