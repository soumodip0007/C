// Count distinct elements of an array
#include <stdio.h>

// Function to count distinct elements in an array
int countDistinctElements(int arr[], int size) {
    int count = 0;

    for (int i = 0; i < size; i++) {
        // Check if the current element is not equal to any previous elements
        int isDistinct = 1;
        for (int j = 0; j < i; j++) {
            if (arr[i] == arr[j]) {
                isDistinct = 0;
                break;
            }
        }

        if (isDistinct) {
            count++;
        }
    }

    return count;
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

    // Count distinct elements
    int distinctCount = countDistinctElements(arr, size);

    // Display the result
    printf("Number of distinct elements: %d\n", distinctCount);

    return 0;
}
