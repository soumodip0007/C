// Finding the array type
#include <stdio.h>

// Function to check if an array is sorted in ascending order
int isSortedAscending(int arr[], int size) {
    for (int i = 1; i < size; i++) {
        if (arr[i - 1] > arr[i]) {
            return 0; // Not sorted in ascending order
        }
    }
    return 1; // Sorted in ascending order
}

// Function to check if an array is sorted in descending order
int isSortedDescending(int arr[], int size) {
    for (int i = 1; i < size; i++) {
        if (arr[i - 1] < arr[i]) {
            return 0; // Not sorted in descending order
        }
    }
    return 1; // Sorted in descending order
}

// Function to check if an array is in random order
int isRandomOrder(int arr[], int size) {
    for (int i = 1; i < size; i++) {
        if (arr[i - 1] == arr[i]) {
            return 0; // Not in random order
        }
    }
    return 1; // In random order
}

int main() {
    int arr[100], size;

    // User input for array size
    printf("Enter the size of the array: ");
    scanf("%d", &size);

    // User input for array elements
    printf("Enter %d elements for the array:\n", size);
    for (int i = 0; i < size; i++) {
        scanf("%d", &arr[i]);
    }

    // Check the type of the array
    if (isSortedAscending(arr, size)) {
        printf("The array is sorted in ascending order.\n");
    } else if (isSortedDescending(arr, size)) {
        printf("The array is sorted in descending order.\n");
    } else if (isRandomOrder(arr, size)) {
        printf("The array is in random order.\n");
    } else {
        printf("The array is not sorted and not in random order.\n");
    }

    return 0;
}
