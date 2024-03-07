// Octal to decimal conversion
#include <stdio.h>

int octalToDecimal(int octal) {
    int decimal = 0;
    int base = 1;

    while (octal > 0) {
        int lastDigit = octal % 10;
        decimal += lastDigit * base;
        base *= 8;
        octal /= 10;
    }

    return decimal;
}

int main() {
    int octal;

    // Input the octal number
    printf("Enter an octal number: ");
    scanf("%o", &octal);

    // Convert octal to decimal
    int decimal = octalToDecimal(octal);

    // Display the result
    printf("Decimal equivalent: %d\n", decimal);

    return 0;
}
