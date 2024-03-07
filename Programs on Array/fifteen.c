// Missing elements of a range
#include <stdio.h>

// Function to find missing elements in a range
void findMissingElements(int arr[], int size, int start, int end) {
    printf("Missing elements in the range %d to %d: ", start, end);

    // Create a boolean array to mark present elements
    int present[end - start + 1];
    for (int i = 0; i <= end - start; i++) {
        present[i] = 0;
    }

    // Mark present elements in the boolean array
    for (int i = 0; i < size; i++) {
        if (arr[i] >= start && arr[i] <= end) {
            present[arr[i] - start] = 1;
        }
    }

    // Display missing elements
    for (int i = 0; i <= end - start; i++) {
        if (!present[i]) {
            printf("%d ", i + start);
        }
    }

    printf("\n");
}

int main() {
    int arr[100], size, start, end;

    // User input for array size
    printf("Enter the size of the array: ");
    scanf("%d", &size);

    // User input for array elements
    printf("Enter %d elements for the array:\n", size);
    for (int i = 0; i < size; i++) {
        scanf("%d", &arr[i]);
    }

    // User input for the range
    printf("Enter the start and end of the range: ");
    scanf("%d %d", &start, &end);

    // Find missing elements in the range
    findMissingElements(arr, size, start, end);

    return 0;
}
