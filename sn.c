#include <stdio.h>
int main ()
{
    int num ;
    printf ("Enter a number : ");
    scanf("%d " ,&num);
    if (num > 0){
        printf("%d is positive. \n", num);
    }
    else if ( num < 0){
        printf("%d id negative. \n", num);
    }
    else{printf("The number is zero . \n" , num);
    }

}
