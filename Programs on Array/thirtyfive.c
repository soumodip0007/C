// Rearrange positive and negative numbers in an array
#include <stdio.h>

// Function to rearrange positive and negative numbers in an array
void rearrangePositiveNegative(int arr[], int n) {
    int i = -1;

    // Partition the array into two halves with positive and negative numbers
    for (int j = 0; j < n; j++) {
        if (arr[j] < 0) {
            i++;
            // Swap arr[i] and arr[j]
            int temp = arr[i];
            arr[i] = arr[j];
            arr[j] = temp;
        }
    }

    // Rearrange positive and negative numbers alternatively
    int posIndex = i + 1;
    int negIndex = 0;

    while (posIndex < n && negIndex < posIndex && arr[negIndex] < 0) {
        // Swap arr[negIndex] and arr[posIndex]
        int temp = arr[negIndex];
        arr[negIndex] = arr[posIndex];
        arr[posIndex] = temp;

        negIndex += 2;
        posIndex++;
    }
}

int main() {
    int arr[] = {-1, 2, -3, 4, 5, 6, -7, 8, 9};
    int n = sizeof(arr) / sizeof(arr[0]);

    printf("Original array: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    rearrangePositiveNegative(arr, n);

    printf("Array after rearranging positive and negative numbers: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}
