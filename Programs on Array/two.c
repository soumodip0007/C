// Smallest and largest element in an array
#include <stdio.h>

// Function to find the smallest and largest elements in an array
void findSmallestAndLargest(int arr[], int size, int *smallest, int *largest) {
    // Initialize smallest and largest with the first element
    *smallest = *largest = arr[0];

    // Iterate through the array to find the smallest and largest elements
    for (int i = 1; i < size; i++) {
        if (arr[i] < *smallest) {
            *smallest = arr[i];
        } else if (arr[i] > *largest) {
            *largest = arr[i];
        }
    }
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

    // Find the smallest and largest elements
    int smallest, largest;
    findSmallestAndLargest(arr, size, &smallest, &largest);

    // Display the results
    printf("Smallest element: %d\n", smallest);
    printf("Largest element: %d\n", largest);

    return 0;
}
