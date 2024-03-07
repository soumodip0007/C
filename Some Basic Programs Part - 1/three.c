//Ascii values of a character
#include <stdio.h>

int main() {
    char ch;

    printf("Enter a character: ");
    scanf(" %c", &ch);

    int asciiValue = ch;

    printf("The ASCII value of %c is %d\n", ch, asciiValue);

    return 0;
}
