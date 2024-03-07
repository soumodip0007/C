// Merge two sorted arrays
#include <stdio.h>

// Function to merge two sorted arrays
void mergeSortedArrays(int arr1[], int m, int arr2[], int n, int result[]) {
    int i = 0, j = 0, k = 0;

    // Compare elements of both arrays and merge
    while (i < m && j < n) {
        if (arr1[i] <= arr2[j]) {
            result[k] = arr1[i];
            i++;
        } else {
            result[k] = arr2[j];
            j++;
        }
        k++;
    }

    // Copy the remaining elements of arr1, if any
    while (i < m) {
        result[k] = arr1[i];
        i++;
        k++;
    }

    // Copy the remaining elements of arr2, if any
    while (j < n) {
        result[k] = arr2[j];
        j++;
        k++;
    }
}

int main() {
    int arr1[] = {1, 3, 5, 7};
    int m = sizeof(arr1) / sizeof(arr1[0]);

    int arr2[] = {2, 4, 6, 8};
    int n = sizeof(arr2) / sizeof(arr2[0]);

    // Allocate space for the merged array
    int result[m + n];

    // Merge the two sorted arrays
    mergeSortedArrays(arr1, m, arr2, n, result);

    // Print the merged array
    printf("Merged Sorted Array: ");
    for (int i = 0; i < m + n; i++) {
        printf("%d ", result[i]);
    }
    printf("\n");

    return 0;
}
