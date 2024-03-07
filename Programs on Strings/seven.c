// Sorting a string in alphabetical order
#include <stdio.h>
#include <string.h>

void sortString(char *str) {
    int length = strlen(str);

    // Bubble sort
    for (int i = 0; i < length - 1; i++) {
        for (int j = 0; j < length - i - 1; j++) {
            // Compare adjacent characters and swap if necessary
            if (str[j] > str[j + 1]) {
                char temp = str[j];
                str[j] = str[j + 1];
                str[j + 1] = temp;
            }
        }
    }
}

int main() {
    char str[100];

    // String Input
    printf("Enter a string: ");
    scanf("%s", str);

    // Sort the string in alphabetical order
    sortString(str);

    // Output the result
    printf("String in alphabetical order: %s\n", str);

    return 0;
}
