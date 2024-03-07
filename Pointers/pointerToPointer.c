#include<stdio.h>

int main() {
    float tax = 7.2;
    float *ptr = &tax;
    float **pptr = &ptr;

    int number = 18;
    int *ptr = &number;
    int **pptr = &ptr;
    printf("%d\n", **pptr);

    return 0;
}