// Decimal to octal conversion
#include <stdio.h>

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
    int decimal;

    // Input the decimal number
    printf("Enter a decimal number: ");
    scanf("%d", &decimal);

    // Convert decimal to octal and display the result
    decimalToOctal(decimal);

    return 0;
}
