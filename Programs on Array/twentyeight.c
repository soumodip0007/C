// Array rotation - Left and right
#include <stdio.h>

void leftRotate(int arr[], int n, int k) {
    k = k % n; // Handle cases where k is greater than n

    // Print the rotated array
    printf("Left rotated array: ");
    for (int i = k; i < n + k; i++) {
        printf("%d ", arr[i % n]);
    }
    printf("\n");
}

void rightRotate(int arr[], int n, int k) {
    k = k % n; // Handle cases where k is greater than n

    // Print the rotated array
    printf("Right rotated array: ");
    for (int i = n - k; i < 2 * n - k; i++) {
        printf("%d ", arr[i % n]);
    }
    printf("\n");
}

int main() {
    int arr[] = {1, 2, 3, 4, 5};
    int n = sizeof(arr) / sizeof(arr[0]);
    int k = 2;

    printf("Original array: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    leftRotate(arr, n, k);
    rightRotate(arr, n, k);

    return 0;
}
