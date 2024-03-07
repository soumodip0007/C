// Octal to binary conversion
#include <stdio.h>

// Function to convert octal to decimal
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

// Function to convert decimal to binary
void decimalToBinary(int decimal) {
    // Base case
    if (decimal == 0) {
        printf("Binary equivalent: 0\n");
        return;
    }

    // Array to store binary digits
    int binary[32];
    
    // Index to track the position of the next binary digit
    int index = 0;

    // Convert decimal to binary
    while (decimal > 0) {
        binary[index++] = decimal % 2;
        decimal /= 2;
    }

    // Display the binary equivalent
    printf("Binary equivalent: ");
    for (int i = index - 1; i >= 0; i--) {
        printf("%d", binary[i]);
    }
    printf("\n");
}

int main() {
    int octal;

    // Input the octal number
    printf("Enter an octal number: ");
    scanf("%o", &octal);

    // Convert octal to decimal
    int decimal = octalToDecimal(octal);

    // Convert decimal to binary and display the result
    decimalToBinary(decimal);

    return 0;
}
