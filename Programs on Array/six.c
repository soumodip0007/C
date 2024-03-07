// Sum of positive square elements in an array
#include <stdio.h>

// Function to calculate the sum of positive square elements in an array
int sumOfPositiveSquares(int arr[], int size) {
    int sum = 0;

    for (int i = 0; i < size; i++) {
        if (arr[i] > 0) {
            sum += arr[i] * arr[i];
        }
    }

    return sum;
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

    // Calculate the sum of positive square elements
    int result = sumOfPositiveSquares(arr, size);

    // Display the result
    printf("Sum of positive square elements: %d\n", result);

    return 0;
}
