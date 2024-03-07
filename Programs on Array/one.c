// Basic array operations (Insert, delete and search an element)
#include <stdio.h>

// Function to display the elements of the array
void displayArray(int arr[], int size) {
    printf("Array elements: ");
    for (int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

// Function to search for an element in the array
int searchElement(int arr[], int size, int element) {
    for (int i = 0; i < size; i++) {
        if (arr[i] == element) {
            return i;  // Element found at index i
        }
    }
    return -1;  // Element not found
}

// Function to insert an element at a specific position in the array
void insertElement(int arr[], int *size, int position, int element) {
    if (position < 0 || position > *size) {
        printf("Invalid position for insertion.\n");
        return;
    }

    // Shift elements to make space for the new element
    for (int i = *size - 1; i >= position; i--) {
        arr[i + 1] = arr[i];
    }

    // Insert the new element
    arr[position] = element;

    // Increment the size of the array
    (*size)++;

    printf("Element %d inserted at position %d.\n", element, position);
}

// Function to delete an element at a specific position in the array
void deleteElement(int arr[], int *size, int position) {
    if (position < 0 || position >= *size) {
        printf("Invalid position for deletion.\n");
        return;
    }

    // Shift elements to fill the gap left by the deleted element
    for (int i = position; i < *size - 1; i++) {
        arr[i] = arr[i + 1];
    }

    // Decrement the size of the array
    (*size)--;

    printf("Element at position %d deleted.\n", position);
}

int main() {
    int arr[100];
    int size = 0;  // Initial size of the array

    // User input for array elements
    printf("Enter the size of the array: ");
    scanf("%d", &size);

    printf("Enter %d elements for the array:\n", size);
    for (int i = 0; i < size; i++) {
        scanf("%d", &arr[i]);
    }

    // Display the initial array
    displayArray(arr, size);

    // User input for array operations
    int choice, element, position;
    while (1) {
        printf("\nArray Operations:\n");
        printf("1. Insert\n2. Delete\n3. Search\n4. Display\n5. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                // Insert an element
                printf("Enter the element to insert: ");
                scanf("%d", &element);
                printf("Enter the position to insert: ");
                scanf("%d", &position);
                insertElement(arr, &size, position, element);
                break;

            case 2:
                // Delete an element
                printf("Enter the position to delete: ");
                scanf("%d", &position);
                deleteElement(arr, &size, position);
                break;

            case 3:
                // Search for an element
                printf("Enter the element to search: ");
                scanf("%d", &element);
                int searchIndex = searchElement(arr, size, element);
                if (searchIndex != -1) {
                    printf("Element %d found at position %d.\n", element, searchIndex);
                } else {
                    printf("Element %d not found.\n", element);
                }
                break;

            case 4:
                // Display the array
                displayArray(arr, size);
                break;

            case 5:
                // Exit the program
                printf("Exiting the program.\n");
                return 0;

            default:
                printf("Invalid choice. Please enter a valid option.\n");
        }
    }

    return 0;
}
