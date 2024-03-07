// Number of days in a given month of a given year
#include <stdio.h>

// Function to check if a year is a leap year
int isLeapYear(int year) {
    // Leap years are divisible by 4
    // However, years divisible by 100 are not leap years unless they are divisible by 400
    return ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0));
}

// Function to get the number of days in a given month of a given year
int getDaysInMonth(int month, int year) {
    switch (month) {
        case 1: case 3: case 5: case 7: case 8: case 10: case 12:
            return 31;
        case 4: case 6: case 9: case 11:
            return 30;
        case 2:
            return isLeapYear(year) ? 29 : 28;
        default:
            return -1;  // Invalid month
    }
}

int main() {
    int month, year;

    // Input the month and year
    printf("Enter the month and year (MM YYYY): ");
    scanf("%d %d", &month, &year);

    // Validate the input month
    if (month < 1 || month > 12) {
        printf("Invalid month. Please enter a month between 1 and 12.\n");
        return 1;  // Exit with an error code
    }

    // Get the number of days and display the result
    int daysInMonth = getDaysInMonth(month, year);
    if (daysInMonth == -1) {
        printf("Invalid month. Please enter a valid month.\n");
    } else {
        printf("Number of days in %d/%d: %d\n", month, year, daysInMonth);
    }

    return 0;
}
