// Remove spaces from a string
#include <stdio.h>

void removeSpaces(char *input, char *output) {
    while (*input) {
        if (*input != ' ') {
            *output = *input;
            output++;
        }
        input++;
    }
    *output = '\0'; // Null-terminate the output string
}

int main() {
    char inputString[100];
    char outputString[100];

    // Input a string with spaces
    printf("Enter a string with spaces: ");
    fgets(inputString, sizeof(inputString), stdin);

    // Remove spaces
    removeSpaces(inputString, outputString);

    // Output the result
    printf("String without spaces: %s\n", outputString);

    return 0;
}
