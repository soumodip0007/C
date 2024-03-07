#include<stdio.h>

void display(char arr[]);

int main() {
    char *changeable = "Hello World 1";
    puts(changeable); 
    changeable = "Hey There! 1";
    puts(changeable);

    char unchangeable[] = "Hello World 2";
    puts(unchangeable);
    unchangeable = "Hey There 2";
    puts(unchangeable);
    return 0;
}

void display(char arr[]) {
    for(int i = 0; arr[i] != '\0'; i++) {
        printf("%c", arr[i]);
    }
    printf("\n");
}