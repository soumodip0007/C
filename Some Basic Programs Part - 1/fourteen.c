// Sum of digits of a number
#include <stdio.h>

int main() {
    int num, digit, sum = 0;

    // Input a number from the user
    printf("Enter a number: ");
    scanf("%d", &num);

    // Calculate the sum of digits
    while (num != 0) {
        digit = num % 10;  // Extract the last digit
        sum += digit;      // Add the digit to the sum
        num /= 10;         // Remove the last digit
    }

    // Print the result
    printf("The sum of digits is: %d\n", sum);

    return 0;
}
