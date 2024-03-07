// Factorial of a number
#include <stdio.h>

int main() {
    int num;
    unsigned long long factorial = 1;

    // Input a number from the user
    printf("Enter a non-negative integer: ");
    scanf("%d", &num);

    // Check if the number is negative
    if (num < 0) {
        printf("Factorial is not defined for negative numbers.\n");
    } else {
        // Calculate the factorial
        for (int i = 1; i <= num; ++i) {
            factorial *= i;
        }

        // Print the result
        printf("Factorial of %d = %llu\n", num, factorial);
    }

    return 0;
}
