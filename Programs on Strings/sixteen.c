// Replace substring in a string
#include <stdio.h>
#include <string.h>

void replaceSubstring(char *input, const char *substringToReplace, const char *replacement) {
    char *position = strstr(input, substringToReplace);
    int lengthToReplace = strlen(substringToReplace);
    int lengthReplacement = strlen(replacement);

    while (position != NULL) {
        // Replace the substring with the replacement string
        memmove(position + lengthReplacement, position + lengthToReplace, strlen(position + lengthToReplace) + 1);
        memcpy(position, replacement, lengthReplacement);

        // Find the next occurrence
        position = strstr(position + lengthReplacement, substringToReplace);
    }
}

int main() {
    char inputString[100];

    // Input a string
    printf("Enter a string: ");
    fgets(inputString, sizeof(inputString), stdin);

    // Remove newline character from user input
    inputString[strcspn(inputString, "\n")] = '\0';

    char substringToReplace[20];
    char replacement[20];

    // Input the substring to replace
    printf("Enter the substring to replace: ");
    fgets(substringToReplace, sizeof(substringToReplace), stdin);

    // Remove newline character from user input
    substringToReplace[strcspn(substringToReplace, "\n")] = '\0';

    // Input the replacement string
    printf("Enter the replacement string: ");
    fgets(replacement, sizeof(replacement), stdin);

    // Remove newline character from user input
    replacement[strcspn(replacement, "\n")] = '\0';

    // Replace the substring
    replaceSubstring(inputString, substringToReplace, replacement);

    // Output the result
    printf("String after replacement: %s\n", inputString);

    return 0;
}
