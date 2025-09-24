// Program to take character as input
// Developed by Snigdha Singh
// Date: 24/09/25
#include <stdio.h>

int main(void) {
    char ch;

    printf("Enter a character: ");
    scanf("%c", &ch);

    switch (ch) {
        case 'a': case 'e': case 'i': case 'o': case 'u':
        case 'A': case 'E': case 'I': case 'O': case 'U':
            printf("%c is a vowel.\n", ch);
            return 0;   // exit after vowel check
    }

    if (ch >= '0' && ch <= '9') {
        printf("%c is a digit.\n", ch);
    } else if ((ch >= 'a' && ch <= 'z') || (ch >= 'A' && ch <= 'Z')) {
        printf("%c is a consonant.\n", ch);
    } else {
        printf("%c is neither a vowel, digit, nor consonant.\n", ch);
    }


}
