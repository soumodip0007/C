#include<stdio.h>

// void display(int arr[], int n);

// int main() {
//     int arr[] = {10, 20, 30, 40, 50};
//     display(arr, 5);
//     return 0;
// }

// void display(int arr[], int n) {
//     for(int i = 0; i<n; i++) {
//         printf("%d \t", arr[i]);
//     }
//     printf("\n");
// }

void display(int *ptr, int n);

int main() {
    int arr[] = {10, 20, 30, 40, 50};
    display(arr, 5);
    return 0;
}

void display(int *arr, int n) {
    for(int i = 0; i<n; i++) {
        printf("%d \t", arr[i]);
    }
    printf("\n");
}