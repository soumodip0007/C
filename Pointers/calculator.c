#include<stdio.h>

void calculator(int a, int b, int *add, int *sub, int *mult, int *div, int *mod);

int main() {
    int a, b;
    printf("Enter two numbers\n");
    scanf("%d %d", &a,&b);
    int add, sub, mult, div, mod;
    calculator(a, b, &add, &sub, &mult, &div, &mod);

    printf("Addition is = %d\nSubtraction is = %d\nMultiplication is = %d\nDivision is = %d\nModulus is = %d", add, sub, mult, div, mod);
    return 0;
}

void calculator(int a, int b, int *add, int *sub, int *mult, int *div, int *mod) {
    *add = a + b;
    *sub = a - b;
    *mult = a * b;
    *div = a / b;
    *mod = a % b;
}