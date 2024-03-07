// Check if two strings match where one string contains wildcard characters
// A wildcard string, in the context of pattern matching, is a string that may contain special 
// characters, known as wildcards, which represent various sequences of characters. Wildcards 
// are used to match multiple characters or no characters at all in a flexible and generalized way. 
// Common wildcard characters include:

// 1. * (asterisk): Represents zero or more characters.
// 2. ? (question mark): Represents exactly one character.
// For example:

// The wildcard pattern "cat*" would match strings like "cat", "caterpillar", and "category".
// The wildcard pattern "file?.txt" would match strings like "file1.txt", "fileA.txt", but not 
// "file.txt" or "file12.txt". Wildcards are often used in file matching, command-line arguments, 
// and search operations where a flexible pattern matching approach is required.

// In the context of the C program provided earlier, the program checks if two strings match where 
// one string contains wildcard characters. The wildcard character used in the program is *. This allows 
// for flexible pattern matching where * can match zero or more characters.
#include <stdio.h>
#include <stdbool.h>
#include<string.h>

bool matchStrings(const char *str, const char *pattern) {
    // Iterate through each character in the strings
    while (*str && *pattern) {
        // If current characters match or pattern has a wildcard '*', move to the next characters
        if (*pattern == '*' || *pattern == *str) {
            pattern++;
            str++;
        } else {
            // If no match and no wildcard, return false
            return false;
        }
    }

    // If the pattern is exhausted, and the remaining characters in str are also '*', it's a match
    while (*pattern == '*') {
        pattern++;
    }

    // If both strings are exhausted, they match
    return *str == '\0' && *pattern == '\0';
}

int main() {
    char str[100], pattern[100];

    // Input a string and a pattern
    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    printf("Enter a pattern with wildcards: ");
    fgets(pattern, sizeof(pattern), stdin);

    // Remove newline characters from user input
    str[strcspn(str, "\n")] = '\0';
    pattern[strcspn(pattern, "\n")] = '\0';

    // Check if the strings match
    if (matchStrings(str, pattern)) {
        printf("The strings match.\n");
    } else {
        printf("The strings do not match.\n");
    }

    return 0;
}



