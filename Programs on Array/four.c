// Check if two arrays are the same or not
#include <stdio.h>

// Function to check if two arrays are the same
int areArraysEqual(int arr1[], int size1, int arr2[], int size2) {
    // If sizes are different, arrays are not the same
    if (size1 != size2) {
        return 0;
    }

    // Compare each element of the arrays
    for (int i = 0; i < size1; i++) {
        if (arr1[i] != arr2[i]) {
            return 0; // Arrays are not the same
        }
    }

    return 1; // Arrays are the same
}

int main() {
    int arr1[100], arr2[100], size1, size2;

    // User input for the first array
    printf("Enter the size of the first array: ");
    scanf("%d", &size1);

    printf("Enter %d elements for the first array:\n", size1);
    for (int i = 0; i < size1; i++) {
        scanf("%d", &arr1[i]);
    }

    // User input for the second array
    printf("Enter the size of the second array: ");
    scanf("%d", &size2);

    printf("Enter %d elements for the second array:\n", size2);
    for (int i = 0; i < size2; i++) {
        scanf("%d", &arr2[i]);
    }

    // Check if the arrays are the same
    if (areArraysEqual(arr1, size1, arr2, size2)) {
        printf("The arrays are the same.\n");
    } else {
        printf("The arrays are not the same.\n");
    }

    return 0;
}
