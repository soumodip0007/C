// Number of times digit 3 occurs in each and every number from 0 to n
#include <stdio.h>

// Function to count the occurrences of digit 3 in a number
int countDigitThree(int num) {
    int count = 0;

    while (num > 0) {
        int digit = num % 10;
        if (digit == 3) {
            count++;
        }
        num /= 10;
    }

    return count;
}

int main() {
    int n;

    // Input the value of n
    printf("Enter the value of n: ");
    scanf("%d", &n);

    // Validate the input
    if (n < 0) {
        printf("Invalid input. Please enter a non-negative integer.\n");
        return 1;  // Exit with an error code
    }

    // Count and display the number of occurrences of digit 3 for each number from 0 to n
    printf("Number of occurrences of digit 3 in each number from 0 to %d:\n", n);
    for (int i = 0; i <= n; i++) {
        int count = countDigitThree(i);
        printf("%d: %d\n", i, count);
    }

    return 0;
}
