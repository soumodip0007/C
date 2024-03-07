// Replace all 0's with 1 in a given integer
#include <stdio.h>

long long replaceZerosWithOnes(long long num) {
    long long result = 0;
    long long multiplier = 1;

    while (num > 0) {
        int digit = num % 10;
        
        // Replace 0 with 1
        if (digit == 0) {
            digit = 1;
        }

        result += digit * multiplier;
        multiplier *= 10;
        num /= 10;
    }

    return result;
}

int main() {
    long long num;

    // Input the integer
    printf("Enter an integer: ");
    scanf("%lld", &num);

    // Replace 0's with 1's
    long long result = replaceZerosWithOnes(num);

    // Display the result
    printf("After replacing 0's with 1's: %lld\n", result);

    return 0;
}

