// Reversing an array
#include <stdio.h>

// Function to reverse the elements of an array
void reverseArray(int arr[], int size) {
    int start = 0;
    int end = size - 1;

    while (start < end) {
        // Swap the elements at the start and end positions
        int temp = arr[start];
        arr[start] = arr[end];
        arr[end] = temp;

        // Move the start and end positions towards the center
        start++;
        end--;
    }
}

// Function to display the elements of an array
void displayArray(int arr[], int size) {
    printf("Reversed array: ");
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

    // Reverse the array
    reverseArray(arr, size);

    // Display the reversed array
    displayArray(arr, size);

    return 0;
}
