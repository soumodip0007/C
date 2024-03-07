// Check if two strings are Anagram or not
// An anagram is a word or phrase formed by rearranging the letters of another word or phrase,
// using all the original letters exactly once. In other words, two strings are anagrams if they
//  have the same characters with the same frequency, but the order of the characters may be different.

// For example:

// "listen" and "silent" are anagrams because they have the same set of characters.
// "triangle" and "integral" are anagrams.
// "hello" and "world" are not anagrams.
// To determine if two strings are anagrams, you can compare the frequency of characters in both strings.
//  If the frequency of each character is the same in both strings, they are considered anagrams.

#include <stdio.h>
#include <string.h>

#define CHAR_COUNT 256  // Assuming ASCII characters

int areAnagrams(const char *str1, const char *str2) {
    int count1[CHAR_COUNT] = {0};
    int count2[CHAR_COUNT] = {0};

    // Count the frequency of characters in the first string
    while (*str1) {
        count1[(unsigned char)*str1]++;
        str1++;
    }

    // Count the frequency of characters in the second string
    while (*str2) {
        count2[(unsigned char)*str2]++;
        str2++;
    }

    // Compare the frequency of characters
    for (int i = 0; i < CHAR_COUNT; i++) {
        if (count1[i] != count2[i]) {
            return 0;  // Not anagrams
        }
    }

    return 1;  // Anagrams
}

int main() {
    char str1[100], str2[100];

    // Input two strings
    printf("Enter the first string: ");
    fgets(str1, sizeof(str1), stdin);

    printf("Enter the second string: ");
    fgets(str2, sizeof(str2), stdin);

    // Remove newline characters from user input
    str1[strcspn(str1, "\n")] = '\0';
    str2[strcspn(str2, "\n")] = '\0';

    // Check if the strings are anagrams
    if (areAnagrams(str1, str2)) {
        printf("The strings are anagrams.\n");
    } else {
        printf("The strings are not anagrams.\n");
    }

    return 0;
}
