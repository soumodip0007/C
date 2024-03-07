// Sum of elements in an array
#include <stdio.h>

// Function to calculate the sum of elements in an array
int calculateSum(int arr[], int size) {
    int sum = 0;

    // Iterate through the array and add each element to the sum
    for (int i = 0; i < size; i++) {
        sum += arr[i];
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

    // Calculate the sum of elements
    int sum = calculateSum(arr, size);

    // Display the result
    printf("Sum of elements: %d\n", sum);

    return 0;
}
