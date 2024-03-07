#include<stdio.h>

int main() {
    FILE *fptr;
    fptr = fopen("Demo.txt", "r");
    // fptr = fopen("Demo.txt", "w");
    
    // fputc('M', fptr);
    // fputc('A', fptr);
    // fputc('R', fptr);
    // fputc('I', fptr);
    // fputc('O', fptr);

    printf("%c\n", fgetc(fptr));
    printf("%c\n", fgetc(fptr));
    printf("%c\n", fgetc(fptr));
    printf("%c\n", fgetc(fptr));
    printf("%c\n", fgetc(fptr));

    fclose(fptr);
    
    return 0;
}