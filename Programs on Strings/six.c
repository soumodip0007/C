// String is a palindrome or not
#include <stdio.h>
#include <string.h>

int isPalindrome(const char *str) {
    int length = strlen(str);

    // Initialize pointers for the start and end of the string
    int start = 0;
    int end = length - 1;

    while (start < end) {
        // Compare characters from start and end
        if (str[start] != str[end]) {
            return 0; // Not a palindrome
        }
        start++;
        end--;
    }

    return 1; // Palindrome
}

int main() {
    char str[100];

    // String Input
    printf("Enter a string: ");
    scanf("%s", str);

    // Check if the string is a palindrome
    if (isPalindrome(str)) {
        printf("The string is a palindrome.\n");
    } else {
        printf("The string is not a palindrome.\n");
    }

    return 0;
}
