#include<stdio.h>

int main() {
    int marks[4];

    int *ptr = &marks[0];
    for(int i = 0; i<4; i++) {
        printf("%d index : ", i);
        scanf("%d", (ptr+i));
        // scanf("%d", &marks[i]);
    }

    for(int i = 0; i<4; i++) {
        printf("%d index = %d\n", i, *(ptr+i));
        // printf("%d index = %d\n", i, marks[i]);
    }

    return 0;
}