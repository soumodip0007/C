// Armstrong numbers between two intervals
#include <stdio.h>
#include<math.h>

// Function to calculate the power of a number
int power(int base, int exponent) {
    int result = 1;
    while (exponent > 0) {
        result *= base;
        exponent--;
    }
    return result;
}

// Function to check if a number is an Armstrong number
int isArmstrong(int num) {
    int originalNum = num;
    int n = 0;
    int sum = 0;

    // Count the number of digits
    while (originalNum != 0) {
        originalNum /= 10;
        n++;
    }

    // Calculate the sum of digits raised to the power of n
    originalNum = num;
    while (originalNum != 0) {
        int digit = originalNum % 10;
        sum += power(digit, n);
        originalNum /= 10;
    }

    return (sum == num);
}

// Function to print Armstrong numbers in a given range
void printArmstrongNumbers(int start, int end) {
    printf("Armstrong numbers between %d and %d are:\n", start, end);
    for (int i = start; i <= end; i++) {
        if (isArmstrong(i)) {
            printf("%d\n", i);
        }
    }
}

int main() {
    int start, end;

    // Input the range
    printf("Enter the range (start and end): ");
    scanf("%d %d", &start, &end);

    // Print Armstrong numbers in the given range
    printArmstrongNumbers(start, end);

    return 0;
}

