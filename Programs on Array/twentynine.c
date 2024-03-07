// Block swap algorithm for array rotation
#include <stdio.h>

// Function to swap two blocks of an array
void swap(int arr[], int start1, int start2, int blockSize) {
    for (int i = 0; i < blockSize; i++) {
        int temp = arr[start1 + i];
        arr[start1 + i] = arr[start2 + i];
        arr[start2 + i] = temp;
    }
}

// Function to rotate an array using the block swap algorithm
void blockSwapRotate(int arr[], int n, int d) {
    if (d == 0 || d == n) {
        return; // No need to rotate
    }

    if (n - d == d) {
        swap(arr, 0, n - d, d);
        return;
    }

    if (d < n - d) {
        swap(arr, 0, n - d, d);
        blockSwapRotate(arr, n - d, d);
    } else {
        swap(arr, 0, d, n - d);
        blockSwapRotate(arr + n - d, d, 2 * d - n);
    }
}

int main() {
    int arr[] = {1, 2, 3, 4, 5};
    int n = sizeof(arr) / sizeof(arr[0]);
    int d = 2; // Number of positions to rotate

    printf("Original array: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    blockSwapRotate(arr, n, d);

    printf("Array after rotation: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}
