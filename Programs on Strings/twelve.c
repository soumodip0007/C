// Capitalize the first and last letter of each word of a string
#include <stdio.h>
#include <ctype.h>
#include <string.h>

void capitalizeWords(char *input) {
    int length = strlen(input);

    // Capitalize the first and last letter of each word
    for (int i = 0; i < length; i++) {
        // Capitalize the first letter of each word
        if (i == 0 || (i > 0 && input[i - 1] == ' ')) {
            input[i] = toupper(input[i]);
        }
        // Capitalize the last letter of each word
        if (input[i] != ' ' && (i == length - 1 || input[i + 1] == ' ')) {
            input[i] = toupper(input[i]);
        }
    }
}

int main() {
    char inputString[100];

    // Input a string
    printf("Enter a string: ");
    fgets(inputString, sizeof(inputString), stdin);

    // Capitalize the first and last letter of each word
    capitalizeWords(inputString);

    // Output the result
    printf("String with first and last letter of each word capitalized: %s\n", inputString);

    return 0;
}
