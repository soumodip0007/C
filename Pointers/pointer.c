#include<stdio.h> 

int main() {
    int number = 18;
    int *ptr = &number;
    int _number = *ptr;

    printf("%d", _number);

    //address
    // printf("%p\n", &number);
    // printf("%p\n", ptr);
    // printf("%p\n", &ptr);

    // printf("%u\n", &number);
    // printf("%u\n", ptr);
    // printf("%u\n", &ptr);

    //values
    // printf("%d\n", number);
    // printf("%d\n", *ptr);
    // printf("%d\n", *(&number));

    return 0;
}