//write a c program to store first five odd numbers, then reallocate it to store first six even numbers

#include<stdio.h>
#include<stdlib.h>

int main() {
    int *ptr;
    ptr = (int *) calloc(5, sizeof(int));
    ptr[0] = 1;
    ptr[1] = 3;
    ptr[2] = 5;
    ptr[3] = 7;
    ptr[4] = 9;
    
    printf("Odd numbers :- \n");
    for(int i=0; i<5; i++) {
        printf("%d\n", ptr[i]);
    }

    ptr = realloc(ptr, 6);
    ptr[0] = 2;
    ptr[1] = 4;
    ptr[2] = 6;
    ptr[3] = 8;
    ptr[4] = 10;
    ptr[5] = 12;
    
    printf("Even numbers :- \n");
    for(int i=0; i<6; i++) {
        printf("%d\n", ptr[i]);
    }
    free(ptr);
    
    return 0;
}