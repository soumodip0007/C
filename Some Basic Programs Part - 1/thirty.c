// Power of a number
#include <stdio.h>

int power(int base, int exponent) {
    int result = 1;

    for (int i = 0; i < exponent; ++i) {
        result *= base;
    }

    return result;
}

int main() {
    int base, exponent, result;

    // Input the base and exponent from the user
    printf("Enter the base: ");
    scanf("%d", &base);

    printf("Enter the exponent: ");
    scanf("%d", &exponent);

    // Calculate the power using the power function
    result = power(base, exponent);

    // Print the result
    printf("%d^%d = %d\n", base, exponent, result);

    return 0;
}
