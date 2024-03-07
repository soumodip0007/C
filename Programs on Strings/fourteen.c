// Non-repeating characters in a string
#include <stdio.h>
#include <string.h>

#define CHAR_COUNT 256  // Assuming ASCII characters

void findNonRepeatingChars(const char *input, char *result) {
    int frequency[CHAR_COUNT] = {0};

    // Count the frequency of characters
    while (*input) {
        frequency[(unsigned char)*input]++;
        input++;
    }

    // Identify non-repeating characters
    int index = 0;
    for (int i = 0; i < CHAR_COUNT; i++) {
        if (frequency[i] == 1) {
            result[index++] = i;
        }
    }
    result[index] = '\0';  // Null-terminate the result string
}

int main() {
    char inputString[100];
    char nonRepeatingChars[CHAR_COUNT] = {0};

    // Input a string
    printf("Enter a string: ");
    fgets(inputString, sizeof(inputString), stdin);

    // Find non-repeating characters
    findNonRepeatingChars(inputString, nonRepeatingChars);

    // Output the result
    printf("Non-repeating characters: %s\n", nonRepeatingChars);

    return 0;
}
