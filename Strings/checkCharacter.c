#include<stdio.h>

void checkCharacter(char str[], char ch);

int main() {
    printf("Enter a word or sentence\n");
    char str[100];
    gets(str);
    printf("Enter a character to find it is present in given string\n");
    char ch;
    scanf("%c", &ch);
    checkCharacter(str, ch);
    return 0;
}

void checkCharacter(char str[], char ch) {
    for(int i = 0; str[i] != '\0'; i++) {
        if(str[i] == ch) {
            printf("Entered character is present in the string\n");
            return;
        } 
    }
    printf("Entered character is not present in the string\n");
}