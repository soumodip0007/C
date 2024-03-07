// Convert an array into a zig-zag fashion
#include <stdio.h>

// Function to swap two elements in an array
void swap(int *a, int *b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

// Function to convert an array into zig-zag fashion
void zigZag(int arr[], int n) {
    // Flag to indicate whether the current index should be smaller or larger
    int flag = 1;

    for (int i = 0; i < n - 1; i++) {
        if (flag) {
            // If flag is true, make sure arr[i] <= arr[i + 1]
            if (arr[i] > arr[i + 1]) {
                swap(&arr[i], &arr[i + 1]);
            }
        } else {
            // If flag is false, make sure arr[i] >= arr[i + 1]
            if (arr[i] < arr[i + 1]) {
                swap(&arr[i], &arr[i + 1]);
            }
        }

        // Toggle the flag for the next iteration
        flag = !flag;
    }
}

int main() {
    int arr[] = {4, 3, 7, 8, 6, 2, 1};
    int n = sizeof(arr) / sizeof(arr[0]);

    printf("Original array: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    zigZag(arr, n);

    printf("Array in zig-zag fashion: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}
