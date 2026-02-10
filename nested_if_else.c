#include <stdio.h>

int main() {
    int no;
    char ch;

    // -------- Program 1 --------
    printf("Enter any number: ");
    scanf("%d", &no);

    if (no % 5 == 0) {
        if (no % 7 == 0) {
            printf("Divisible by 5 and 7\n\n");
        } else {
            printf("Not divisible by 5 and 7\n\n");
        }
    } else {
        printf("Not divisible by 5 and 7\n\n");
    }

    // -------- Program 2 --------
    printf("Enter a lowercase letter: ");
    scanf(" %c", &ch);  // space before %c to consume newline

    if (ch >= 'a' && ch <= 'z') {
        if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u') {
            printf("The character is a vowel.\n");
        } else {
            printf("The character is a consonant.\n");
        }
    } else {
        printf("Invalid input. Please enter a lowercase letter (a-z).\n");
    }

    return 0;
}
