// Non-repeating elements of an array
#include <stdio.h>

// Function to find non-repeating elements in an array
void findNonRepeatingElements(int arr[], int size) {
    printf("Non-repeating elements: ");

    for (int i = 0; i < size; i++) {
        int isRepeating = 0;

        // Check if the current element is repeated
        for (int j = 0; j < size; j++) {
            if (i != j && arr[i] == arr[j]) {
                isRepeating = 1;
                break;
            }
        }

        // If not repeated, print the element
        if (!isRepeating) {
            printf("%d ", arr[i]);
        }
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

    // Find non-repeating elements
    findNonRepeatingElements(arr, size);

    return 0;
}
