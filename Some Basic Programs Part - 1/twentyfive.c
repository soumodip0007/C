// Perfect number or not
// A Strong Number (or digital factorial) is a number such that the sum of its individual digits, 
// each factorialized, is equal to the number itself. For example, 145 is a Strong Number because 
// 1! + 4! + 5! = 145

#include <stdio.h>

// Function to check if a number is a perfect number
int isPerfectNumber(int num) {
    int sum = 0;

    // Find the divisors and calculate their sum
    for (int i = 1; i <= num / 2; ++i) {
        if (num % i == 0) {
            sum += i;
        }
    }

    return (sum == num);
}

int main() {
    int num;

    // Input a number from the user
    printf("Enter a number: ");
    scanf("%d", &num);

    // Check and print whether the number is a perfect number
    if (isPerfectNumber(num)) {
        printf("%d is a perfect number.\n", num);
    } else {
        printf("%d is not a perfect number.\n", num);
    }

    return 0;
}
