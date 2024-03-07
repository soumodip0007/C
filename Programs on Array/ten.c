// Longest palindrome in an array
#include <stdio.h>
#include <string.h>

// Function to check if a given string is a palindrome
int isPalindrome(char str[]) {
    int length = strlen(str);
    for (int i = 0; i < length / 2; i++) {
        if (str[i] != str[length - 1 - i]) {
            return 0; // Not a palindrome
        }
    }
    return 1; // Palindrome
}

// Function to find the longest palindrome in an array
void findLongestPalindrome(char arr[][100], int size) {
    int maxLength = 0;
    char longestPalindrome[100];

    for (int i = 0; i < size; i++) {
        if (isPalindrome(arr[i]) && strlen(arr[i]) > maxLength) {
            maxLength = strlen(arr[i]);
            strcpy(longestPalindrome, arr[i]);
        }
    }

    if (maxLength > 0) {
        printf("Longest palindrome: %s\n", longestPalindrome);
    } else {
        printf("No palindrome found in the array.\n");
    }
}

int main() {
    char arr[100][100];
    int size;

    // User input for array size
    printf("Enter the size of the array: ");
    scanf("%d", &size);

    // User input for array elements
    printf("Enter %d strings for the array:\n", size);
    for (int i = 0; i < size; i++) {
        scanf("%s", arr[i]);
    }

    // Find the longest palindrome
    findLongestPalindrome(arr, size);

    return 0;
}
