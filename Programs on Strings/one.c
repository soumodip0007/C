// Basic string operations
#include <stdio.h>
#include <string.h>

int main() {
    char str1[100], str2[50];

    // String Input and Output
    printf("Enter a string: ");
    scanf("%s", str1);
    printf("You entered: %s\n", str1);

    // String Length
    int length1 = strlen(str1);
    printf("Length of the first string: %d\n", length1);

    // String Concatenation
    printf("Enter another string to concatenate: ");
    scanf("%s", str2);
    strcat(str1, str2);
    printf("Concatenated string: %s\n", str1);

    // String Comparison
    char str3[50] = "Hello";
    int result = strcmp(str3, str2);
    if (result == 0) {
        printf("Strings are equal.\n");
    } else if (result < 0) {
        printf("String 3 is lexicographically smaller than String 2.\n");
    } else {
        printf("String 3 is lexicographically larger than String 2.\n");
    }

    // String Copy
    char source[50] = "Hey There!";
    char destination[50];
    strcpy(destination, source);
    printf("Copied string: %s\n", destination);

    // String Length after Concatenation
    int length2 = strlen(str1);
    printf("Length of the concatenated string: %d\n", length2);

    return 0;
}

