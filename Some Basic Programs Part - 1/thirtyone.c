// Factors of a number
#include <stdio.h>

// Function to print factors of a number
void printFactors(int num) {
    printf("Factors of %d are: ", num);

    for (int i = 1; i <= num / 2; ++i) {
        if (num % i == 0) {
            printf("%d, ", i);
        }
    }

    printf("%d\n", num);  // Include the number itself as a factor
}

int main() {
    int num;

    // Input a number from the user
    printf("Enter a number: ");
    scanf("%d", &num);

    // Call the function to print factors
    printFactors(num);

    return 0;
}
