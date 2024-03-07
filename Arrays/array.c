#include<stdio.h>

int main() {

    int numbers[4];
    printf("Enter first number : ");
    scanf("%d", &numbers[0]);

    printf("Enter second number : ");
    scanf("%d", &numbers[1]);

    printf("Enter third number : ");
    scanf("%d", &numbers[2]);

    printf("Enter fourth number : ");
    scanf("%d", &numbers[3]);

    printf("First number = %d\nSecond number = %d\nThird number = %d\nFourth number = %d\n", numbers[0], numbers[1], numbers[2], numbers[3]);
    return 0;
}