// Harshad number or not
// A Harshad number (or Niven number) is an integer that is divisible by the sum of its digits. In other words,
// a Harshad number is a number that is divisible by the sum of its own digits.
// Sum of digits 1 + 8 = 9, 18 divisible by 9. ex - 12, 20, 27, 48
#include <stdio.h>

// Function to calculate the sum of digits of a number
int sumOfDigits(int num) {
    int sum = 0;

    while (num != 0) {
        sum += num % 10;
        num /= 10;
    }

    return sum;
}

// Function to check if a number is a Harshad number
int isHarshad(int num) {
    int sumDigits = sumOfDigits(num);

    return (num % sumDigits == 0);
}

int main() {
    int num;

    // Input a number from the user
    printf("Enter a number: ");
    scanf("%d", &num);

    // Check and print whether the number is a Harshad number
    if (isHarshad(num)) {
        printf("%d is a Harshad number.\n", num);
    } else {
        printf("%d is not a Harshad number.\n", num);
    }

    return 0;
}
