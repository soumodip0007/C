//Greatest of three numbers
#include <stdio.h>

int main() {
    int num1, num2, num3;

    // Input three numbers from the user
    printf("Enter the first number: ");
    scanf("%d", &num1);

    printf("Enter the second number: ");
    scanf("%d", &num2);

    printf("Enter the third number: ");
    scanf("%d", &num3);

    // Check and print the greatest number
    if (num1 > num2) {
        if (num1 > num3) {
            printf("%d is the greatest number.\n", num1);
        } else {
            printf("%d is the greatest number.\n", num3);
        }
    } else {
        if (num2 > num3) {
            printf("%d is the greatest number.\n", num2);
        } else {
            printf("%d is the greatest number.\n", num3);
        }
    }

    return 0;
}
