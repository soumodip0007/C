// Toggle each character in a string
#include <stdio.h>
#include <ctype.h>

void toggleString(char *str) {
    while (*str != '\0') {
        if (isupper(*str)) {
            *str = tolower(*str);
        } else if (islower(*str)) {
            *str = toupper(*str);
        }
        str++;
    }
}

int main() {
    char str[100];

    // Input a string
    printf("Enter a string: ");
    scanf("%s", str);

    // Toggle each character in the string
    toggleString(str);

    // Output the toggled string
    printf("Toggled string: %s\n", str);

    return 0;
}
