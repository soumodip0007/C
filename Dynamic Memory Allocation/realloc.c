#include<stdio.h>
#include<stdlib.h>

int main() {
    int *ptr;
    ptr = (int *) calloc(5, sizeof(int));
    printf("Enter five numbers : ");
    for(int i=0; i<5; i++) {
        scanf("%d", &ptr[i]);
    }

    ptr = realloc(ptr, 8);
    printf("Enter eight numbers : ");
    for(int i=0; i<8; i++) {
        scanf("%d", &ptr[i]);
    }

    // printing values 
    for(int i=0; i<8; i++) {
        printf("number %d is %d\n", i, ptr[i]);
    }
    free(ptr);
    
    return 0;
}