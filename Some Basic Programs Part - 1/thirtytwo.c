// Add two fractions
#include <stdio.h>

// Function to find the greatest common divisor (GCD) of two numbers
int findGCD(int a, int b) {
    while (b != 0) {
        int temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}

// Function to add two fractions
void addFractions(int num1, int den1, int num2, int den2) {
    // Find the common denominator
    int commonDenominator = den1 * den2;

    // Find the equivalent numerators
    int equivalentNum1 = num1 * den2;
    int equivalentNum2 = num2 * den1;

    // Add the numerators
    int resultNum = equivalentNum1 + equivalentNum2;

    // Find the greatest common divisor (GCD) of the result numerator and common denominator
    int gcd = findGCD(resultNum, commonDenominator);

    // Simplify the fraction by dividing both the numerator and denominator by their GCD
    resultNum /= gcd;
    commonDenominator /= gcd;

    // Print the result
    printf("Sum of %d/%d and %d/%d is %d/%d\n", num1, den1, num2, den2, resultNum, commonDenominator);
}

int main() {
    int num1, den1, num2, den2;

    // Input the first fraction from the user
    printf("Enter the numerator and denominator of the first fraction (separated by a space): ");
    scanf("%d %d", &num1, &den1);

    // Input the second fraction from the user
    printf("Enter the numerator and denominator of the second fraction (separated by a space): ");
    scanf("%d %d", &num2, &den2);

    // Call the function to add fractions
    addFractions(num1, den1, num2, den2);

    return 0;
}
