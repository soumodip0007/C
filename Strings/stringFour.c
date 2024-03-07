#include<stdio.h>

void display(char arr[]);

int main() {
    char sentence[100];
    gets(sentence);
    puts(sentence);
    
    return 0;
}

void display(char arr[]) {
    for(int i = 0; arr[i] != '\0'; i++) {
        printf("%c", arr[i]);
    }
    printf("\n");
}