// Remove characters in a string except alphabets
#include <stdio.h>
#include <ctype.h>

void removeNonAlphabets(char *input, char *output) {
    while (*input) {
        if (isalpha(*input)) {
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

    // Input a string with non-alphabetic characters
    printf("Enter a string with non-alphabetic characters: ");
    fgets(inputString, sizeof(inputString), stdin);

    // Remove non-alphabetic characters
    removeNonAlphabets(inputString, outputString);

    // Output the result
    printf("String with only alphabetic characters: %s\n", outputString);

    return 0;
}
