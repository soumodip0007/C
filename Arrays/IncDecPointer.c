#include<stdio.h>

int main() {

    //case 1
    int age = 20;
    int *ptr = &age;
    printf("ptr = %u\n", ptr);
    ptr++;
    printf("ptr = %u\n", ptr);
    ptr--;
    printf("ptr = %u\n", ptr);

    // case 2
    // float price = 50.25;
    // float *ptr = &price;
    // ptr++;
    // printf("ptr = %u\n", ptr);

    //case 3
    // char firstChar = 'a';
    // char *ptr = &firstChar;
    // ptr++;
    // printf("ptr = %u\n", ptr);
    
    return 0;
}