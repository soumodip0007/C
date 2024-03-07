// Automorphic number or not
// An automorphic number (or circular number) is a number whose square ends with the number itself. 
// For example, 5 is an automorphic number because 5^2 = 25 and 25 ends with the number 5.
#include <stdio.h>

// Function to check if a number is an automorphic number
int isAutomorphic(int num) {
    int square = num * num;
    int temp = num;
    int count = 0;

    // Count the number of digits in the original number
    while (temp != 0) {
        temp /= 10;
        count++;
    }

    // Extract the last 'count' digits from the square
    int mod = 1;
    for (int i = 0; i < count; i++) {
        mod *= 10;
    }

    int lastDigits = square % mod;

    return (lastDigits == num);
}

int main() {
    int num;

    // Input a number from the user
    printf("Enter a number: ");
    scanf("%d", &num);

    // Check and print whether the number is an automorphic number
    if (isAutomorphic(num)) {
        printf("%d is an automorphic number.\n", num);
    } else {
        printf("%d is not an automorphic number.\n", num);
    }

    return 0;
}
