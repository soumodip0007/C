// Friendly pair or not (amicable or not)
// Friendly numbers, also known as amicable numbers, are pairs of numbers such that 
// the sum of the proper divisors of each number is equal to the other number. 
// For example, the pair (220, 284) is a friendly pair because the sum of the proper 
// divisors of 220 is 284, and the sum of the proper divisors of 284 is 220.
#include <stdio.h>
 
// Function to calculate the sum of proper divisors of a number
int sumOfDivisors(int num) {
    int sum = 1;  // Include 1 as a divisor

    for (int i = 2; i <= num / 2; ++i) {
        if (num % i == 0) {
            sum += i;
        }
    }

    return sum;
}

// Function to check if a pair of numbers is a friendly pair
int isFriendlyPair(int num1, int num2) {
    return (sumOfDivisors(num1) == num2 && sumOfDivisors(num2) == num1);
}

int main() {
    int num1, num2;

    // Input two numbers from the user
    printf("Enter the first number: ");
    scanf("%d", &num1);

    printf("Enter the second number: ");
    scanf("%d", &num2);

    // Check and print whether the pair is a friendly pair
    if (isFriendlyPair(num1, num2)) {
        printf("(%d, %d) is a friendly pair.\n", num1, num2);
    } else {
        printf("(%d, %d) is not a friendly pair.\n", num1, num2);
    }

    return 0;
}
