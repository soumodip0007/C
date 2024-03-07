// Number of digits in an integer
#include <stdio.h>

int main() {
    int num, count = 0;

    // Input an integer from the user
    printf("Enter an integer: ");
    scanf("%d", &num);

    // Handle the case of negative numbers
    if (num < 0) {
        num = -num;  // Make the number positive for counting digits
    }

    // Count the number of digits
    do {
        num = num / 10;
        count++;
    } while (num != 0);

    // Print the result
    printf("The number of digits is: %d\n", count);

    return 0;
}
