// Program to Check if student passed or failed
//developed by snigdha
//date 11/9/25
 #include <stdio.h>

int main(void) {
    int marks;
    printf("Enter your marks: ");
    scanf("%d", &marks);

    if (marks >= 33) {
        printf("PASSED\n");
    } else {
        printf("FAILED\n");
    }


}
