#include<stdio.h>

int main() {
    int age = 20;
    int _age = 22;
    int *ptr = &age;
    int *_ptr = &_age;

    printf("difference = %u\n", ptr-_ptr);
    _ptr = &age;
    printf("comparison = %u\n", ptr == _ptr);
    return 0;
}