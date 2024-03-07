// Second smallest element in an array
#include <stdio.h>
#include <limits.h>

// Function to find the second smallest element in an array
int secondSmallest(int arr[], int size) {
    int smallest = INT_MAX;
    int secondSmallest = INT_MAX;

    for (int i = 0; i < size; i++) {
        if (arr[i] < smallest) {
            secondSmallest = smallest;
            smallest = arr[i];
        } else if (arr[i] < secondSmallest && arr[i] != smallest) {
            secondSmallest = arr[i];
        }
    }

    return secondSmallest;
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

    // Find the second smallest element
    int result = secondSmallest(arr, size);

    // Display the result
    if (result == INT_MAX) {
        printf("There is no second smallest element in the array.\n");
    } else {
        printf("Second smallest element: %d\n", result);
    }

    return 0;
}
