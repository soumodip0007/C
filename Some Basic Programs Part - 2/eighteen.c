// Count possible decoding of a given digit sequence
#include <stdio.h>
#include <string.h>

int countDecodings(char digits[], int n) {
    // Create an array to store the count of decodings
    int count[n + 1];
    memset(count, 0, sizeof(count));

    count[0] = 1;  // Empty string has one decoding

    for (int i = 1; i <= n; i++) {
        // Check if the digit at position i-1 is not '0'
        if (digits[i - 1] > '0') {
            count[i] = count[i - 1];
        }

        // Check if digits at positions i-2 and i-1 form a valid number (between 10 and 26)
        if (i >= 2 && (digits[i - 2] == '1' || (digits[i - 2] == '2' && digits[i - 1] <= '6'))) {
            count[i] += count[i - 2];
        }
    }

    return count[n];
}

int main() {
    char digits[100];
    
    // Input the digit sequence
    printf("Enter the digit sequence: ");
    scanf("%s", digits);

    // Calculate and display the number of possible decodings
    int n = strlen(digits);
    int result = countDecodings(digits, n);
    printf("Number of possible decodings: %d\n", result);

    return 0;
}
