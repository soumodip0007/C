// Circular rotation of an array by K positions
#include <stdio.h>

// Function to reverse an array in-place
void reverse(int arr[], int start, int end) {
    while (start < end) {
        int temp = arr[start];
        arr[start] = arr[end];
        arr[end] = temp;
        start++;
        end--;
    }
}

// Function to perform circular rotation of an array by K positions
void circularRotate(int arr[], int n, int k) {
    k = k % n; // Handle cases where k is greater than n

    // Reverse the entire array
    reverse(arr, 0, n - 1);

    // Reverse the first K elements
    reverse(arr, 0, k - 1);

    // Reverse the remaining elements
    reverse(arr, k, n - 1);
}

int main() {
    int arr[] = {1, 2, 3, 4, 5};
    int n = sizeof(arr) / sizeof(arr[0]);
    int k = 2; // Number of positions to rotate

    printf("Original array: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    circularRotate(arr, n, k);

    printf("Array after circular rotation: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}
