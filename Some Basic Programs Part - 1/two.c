//A character is an alphabet or not
#include <stdio.h>
#include <ctype.h>

int main() {
    char ch;

    printf("Enter a character: ");
    scanf(" %c", &ch);

    if (isalpha(ch)) {
        printf("%c is an alphabet.\n", ch);
    } else {
        printf("%c is not an alphabet.\n", ch);
    }

    return 0;
}
