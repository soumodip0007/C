// Decimal to binary conversion
#include <stdio.h>

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
    int decimal;

    // Input the decimal number
    printf("Enter a decimal number: ");
    scanf("%d", &decimal);

    // Convert decimal to binary and display the result
    decimalToBinary(decimal);

    return 0;
}
