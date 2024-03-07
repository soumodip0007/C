// Sum of numbers in a given range
#include <stdio.h>

int main() {
    int start, end, sum = 0;

    // Input the range from the user
    printf("Enter the starting number: ");
    scanf("%d", &start);

    printf("Enter the ending number: ");
    scanf("%d", &end);

    // Calculate the sum of numbers in the given range
    for (int i = start; i <= end; i++) {
        sum += i;
    }

    // Print the result
    printf("The sum of numbers from %d to %d is: %d\n", start, end, sum);

    return 0;
}
