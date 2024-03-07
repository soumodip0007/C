// Count the sum of numbers in a string
#include <stdio.h>
#include <stdlib.h>

int sumOfNumbers(const char *input) {
    int sum = 0;
    char *endptr; // To check for conversion errors

    while (*input) {
        if (*input >= '0' && *input <= '9') {
            // Found a digit, convert the substring to an integer and add to the sum
            int num = strtol(input, &endptr, 10);
            sum += num;

            // Move the input pointer to the next non-digit character
            input = endptr;
        } else {
            // Move to the next character
            input++;
        }
    }

    return sum;
}

int main() {
    char inputString[100];

    // Input a string with numbers
    printf("Enter a string with numbers: ");
    fgets(inputString, sizeof(inputString), stdin);

    // Count the sum of numbers
    int result = sumOfNumbers(inputString);

    // Output the result
    printf("Sum of numbers in the string: %d\n", result);

    return 0;
}
