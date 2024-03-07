// Remove vowels from a string
#include <stdio.h>

int isVowel(char ch) {
    return (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u' ||
            ch == 'A' || ch == 'E' || ch == 'I' || ch == 'O' || ch == 'U');
}

void removeVowels(char *str) {
    char result[100];
    int i, j;

    for (i = 0, j = 0; str[i] != '\0'; i++) {
        if (!isVowel(str[i])) {
            result[j] = str[i];
            j++;
        }
    }
    result[j] = '\0';

    // Copy the result back to the original string
    for (i = 0; result[i] != '\0'; i++) {
        str[i] = result[i];
    }
    str[i] = '\0';
}

int main() {
    char str[100];

    // String Input
    printf("Enter a string: ");
    scanf("%s", str);

    // Remove vowels from the string
    removeVowels(str);

    // Output the result
    printf("String after removing vowels: %s\n", str);

    return 0;
}
