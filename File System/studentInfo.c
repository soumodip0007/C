#include<stdio.h>

int main() {
    FILE *fptr;
    fptr = fopen("studentInfo.txt", "a");
    
    char name[100];
    int roll;
    float cgpa;

    printf("Enter your name :- ");
    scanf("%s", name);
    printf("Enter your name :- ");
    scanf("%d", &roll);
    printf("Enter your name :- ");
    scanf("%f", &cgpa);

    fprintf(fptr, "Name = %s\n", name);
    fprintf(fptr, "Roll = %d\n", roll);
    fprintf(fptr, "Marks = %f\n", cgpa);
    fprintf(fptr, "\n");

    fclose(fptr);
    
    return 0;
}