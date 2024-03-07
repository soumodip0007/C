// Binary to octal conversion
#include <stdio.h>

// Function to convert binary to decimal
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

// Function to convert decimal to octal
void decimalToOctal(int decimal) {
    // Base case
    if (decimal == 0) {
        printf("Octal equivalent: 0\n");
        return;
    }

    // Array to store octal digits
    int octal[32];
    
    // Index to track the position of the next octal digit
    int index = 0;

    // Convert decimal to octal
    while (decimal > 0) {
        octal[index++] = decimal % 8;
        decimal /= 8;
    }

    // Display the octal equivalent
    printf("Octal equivalent: ");
    for (int i = index - 1; i >= 0; i--) {
        printf("%d", octal[i]);
    }
    printf("\n");
}

int main() {
    int binary;

    // Input the binary number
    printf("Enter a binary number: ");
    scanf("%d", &binary);

    // Convert binary to decimal
    int decimal = binaryToDecimal(binary);

    // Convert decimal to octal and display the result
    decimalToOctal(decimal);

    return 0;
}
