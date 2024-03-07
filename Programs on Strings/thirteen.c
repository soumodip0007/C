// Frequency of characters in a string
#include <stdio.h>
#include <string.h>

#define CHAR_COUNT 256  // Assuming ASCII characters

void countCharacters(const char *input, int *frequency) {
    while (*input) {
        frequency[(unsigned char)*input]++;
        input++;
    }
}

int main() {
    char inputString[100];
    int frequency[CHAR_COUNT] = {0};

    // Input a string
    printf("Enter a string: ");
    fgets(inputString, sizeof(inputString), stdin);

    // Count the frequency of characters
    countCharacters(inputString, frequency);

    // Output the result
    printf("Character frequencies:\n");
    for (int i = 0; i < CHAR_COUNT; i++) {
        if (frequency[i] > 0) {
            printf("'%c': %d\n", i, frequency[i]);
        }
    }

    return 0;
}
