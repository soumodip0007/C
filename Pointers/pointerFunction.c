#include<stdio.h>

void square(int n);
void _square(int* n);

int main() {
    int number = 16;
    square(number);
    printf("number = %d\n", number);

    _square(&number);
    printf("number = %d\n", number);
    return 0;
}


//call by value
void square(int n) {
    n = n * n;
    printf("square = %d\n", n);
}

void _square(int* n) {
    *n = (*n) * (*n);
    printf("square = %d\n", *n);
}