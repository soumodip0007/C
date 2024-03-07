// Remove duplicate elements in an array
#include <stdio.h>

// Function to remove duplicate elements from an array
int removeDuplicates(int arr[], int size) {
    int newSize = 0;

    for (int i = 0; i < size; i++) {
        int isDuplicate = 0;

        // Check if the current element is a duplicate
        for (int j = 0; j < newSize; j++) {
            if (arr[i] == arr[j]) {
                isDuplicate = 1;
                break;
            }
        }

        // If not a duplicate, add it to the new array
        if (!isDuplicate) {
            arr[newSize] = arr[i];
            newSize++;
        }
    }

    return newSize;
}

// Function to display the elements of an array
void displayArray(int arr[], int size) {
    printf("Array without duplicates: ");
    for (int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
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

    // Remove duplicates
    int newSize = removeDuplicates(arr, size);

    // Display the array without duplicates
    displayArray(arr, newSize);

    return 0;
}
