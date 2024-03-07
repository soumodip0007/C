// Armstrong number or not
#include <stdio.h>
#include <math.h>

// Function to calculate the number of digits in a number
int countDigits(int num) {
    int count = 0;
    while (num != 0) {
        num /= 10;
        ++count;
    }
    return count;
}

// Function to check if a number is an Armstrong number
int isArmstrong(int num) {
    int originalNum = num, sum = 0, remainder, n = countDigits(num);

    while (num != 0) {
        remainder = num % 10;
        sum += pow(remainder, n);
        num /= 10;
    }

    return (originalNum == sum);
}

int main() {
    int num;

    // Input a number from the user
    printf("Enter a number: ");
    scanf("%d", &num);

    // Check and print whether the number is an Armstrong number
    if (isArmstrong(num)) {
        printf("%d is an Armstrong number.\n", num);
    } else {
        printf("%d is not an Armstrong number.\n", num);
    }

    return 0;
}
