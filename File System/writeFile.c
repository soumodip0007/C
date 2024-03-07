#include<stdio.h>

int main() {
    FILE *fptr;
    fptr = fopen("Demo.txt", "w");
    // fptr = fopen("Demo.txt", "a");

    fprintf(fptr, "%c", 'M');
    fprintf(fptr, "%c", 'A');
    fprintf(fptr, "%c", 'R');
    fprintf(fptr, "%c", 'I');
    fprintf(fptr, "%c", 'O');

    fclose(fptr);
    
    return 0;
}