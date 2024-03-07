// Binary to decimal conversion
#include <stdio.h>

int binaryToDecimal(int binary) {
    int decimal = 0;
    int base = 1;

    while (binary > 0) {
        int lastDigit = binary % 10;
        decimal += lastDigit * base;
        base *= 2;
        binary /= 10;
    }

    return decimal;
}

int main() {
    int binary;

    // Input the binary number
    printf("Enter a binary number: ");
    scanf("%d", &binary);

    // Convert binary to decimal
    int decimal = binaryToDecimal(binary);

    // Display the result
    printf("Decimal equivalent: %d\n", decimal);

    return 0;
}
