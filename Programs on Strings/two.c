// Length of the string without using strlen() function
#include <stdio.h>

int stringLength(const char *str) {
    int length = 0;

    while (*str != '\0') {
        length++;
        str++;
    }

    return length;
}

int main() {
    char str[100];

    // String Input
    printf("Enter a string: ");
    scanf("%s", str);

    // Calculate and output string length without using strlen()
    int length = stringLength(str);
    printf("Length of the string: %d\n", length);

    return 0;
}
