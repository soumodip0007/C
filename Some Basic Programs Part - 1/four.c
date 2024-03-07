//Uppercase, Lowercase or special character
#include <stdio.h>
#include <ctype.h>

int main() {
    char ch;

    printf("Enter a character: ");
    scanf(" %c", &ch); 

    if (isupper(ch)) {
        printf("%c is an uppercase letter.\n", ch);
    } else if (islower(ch)) {
        printf("%c is a lowercase letter.\n", ch);
    } else if (ispunct(ch)) {
        printf("%c is a special character.\n", ch);
    } else {
        printf("%c is not an alphabet or a special character.\n", ch);
    }

    return 0;
}
