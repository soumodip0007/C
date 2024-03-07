// Palindrome or not
#include <stdio.h>

// Function to check if a number is a palindrome
int isPalindrome(int num) {
    int originalNum = num, reversedNum = 0, remainder;

    while (num != 0) {
        remainder = num % 10;      // Extract the last digit
        reversedNum = reversedNum * 10 + remainder;  // Construct the reversed number
        num /= 10;                 // Remove the last digit
    }

    return (originalNum == reversedNum);
}

int main() {
    int num;

    // Input a number from the user
    printf("Enter a number: ");
    scanf("%d", &num);

    // Check and print whether the number is a palindrome
    if (isPalindrome(num)) {
        printf("%d is a palindrome.\n", num);
    } else {
        printf("%d is not a palindrome.\n", num);
    }

    return 0;
}
