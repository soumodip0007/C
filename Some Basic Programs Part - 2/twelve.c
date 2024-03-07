// Convert digit/number to words
#include <stdio.h>

void numberToWords(int num) {
    if (num < 0) {
        printf("Please enter a non-negative number.\n");
        return;
    }

    // Arrays for one-digit and two-digit words
    char *ones[] = {"", "One", "Two", "Three", "Four", "Five", "Six", "Seven", "Eight", "Nine"};
    char *teens[] = {"", "Eleven", "Twelve", "Thirteen", "Fourteen", "Fifteen", "Sixteen", "Seventeen", "Eighteen", "Nineteen"};
    char *tens[] = {"", "Ten", "Twenty", "Thirty", "Forty", "Fifty", "Sixty", "Seventy", "Eighty", "Ninety"};

    if (num == 0) {
        printf("Zero\n");
        return;
    }

    // Handle thousands
    if (num >= 1000) {
        numberToWords(num / 1000);
        printf("Thousand ");
        num %= 1000;
    }

    // Handle hundreds
    if (num >= 100) {
        printf("%s Hundred ", ones[num / 100]);
        num %= 100;
    }

    // Handle tens and ones
    if (num >= 10 && num <= 19) {
        printf("%s ", teens[num - 10]);
    } else {
        printf("%s%s", tens[num / 10], ones[num % 10]);
    }
}

int main() {
    int num;

    // Input the number
    printf("Enter a non-negative integer: ");
    scanf("%d", &num);

    // Convert number to words and display the result
    numberToWords(num);
    printf("\n");

    return 0;
}
