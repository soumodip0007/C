#include<stdio.h>

void display(char arr[]);

int main() {
    // char name[] = {'M', 'A', 'R', 'I', 'O', '\0'};
    char nameOne[] = "Mario";
    char nameTwo[] = "Luigi";
    display(nameOne);
    display(nameTwo);
    return 0;
}

void display(char arr[]) {
    for(int i = 0; arr[i] != '\0'; i++) {
        printf("%c", arr[i]);
    }
    printf("\n");
}