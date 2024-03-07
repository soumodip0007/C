// Count the number of vowels
#include <stdio.h>

int countVowels(const char *str) {
    int count = 0;

    while (*str != '\0') {
        // Check if the character is a vowel (case-insensitive)
        if (*str == 'a' || *str == 'e' || *str == 'i' || *str == 'o' || *str == 'u' ||
            *str == 'A' || *str == 'E' || *str == 'I' || *str == 'O' || *str == 'U') {
            count++;
        }
        str++;
    }

    return count;
}

int main() {
    char str[100];

    // String Input
    printf("Enter a string: ");
    scanf("%s", str);

    // Count the number of vowels in the string
    int vowels = countVowels(str);

    // Output the result
    printf("Number of vowels in the string: %d\n", vowels);

    return 0;
}
