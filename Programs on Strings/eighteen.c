// Reverse a string
#include <stdio.h>
#include <string.h>

void reverseString(char *str) {
    int length = strlen(str);
    int start = 0;
    int end = length - 1;

    while (start < end) {
        // Swap characters
        char temp = str[start];
        str[start] = str[end];
        str[end] = temp;

        // Move towards the center
        start++;
        end--;
    }
}

int main() {
    char inputString[100];

    // Input a string
    printf("Enter a string: ");
    fgets(inputString, sizeof(inputString), stdin);

    // Remove newline character from user input
    inputString[strcspn(inputString, "\n")] = '\0';

    // Reverse the string
    reverseString(inputString);

    // Output the result
    printf("Reversed string: %s\n", inputString);

    return 0;
}
