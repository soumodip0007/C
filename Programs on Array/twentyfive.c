// Sort an array according to the order defined by another array
#include <stdio.h>
#include <stdlib.h>

// Global variable to store the reference array
const int *globalReferenceArray;

// Custom comparator function based on the order defined by the referenceArray
int compare(const void *a, const void *b) {
    int indexA = -1, indexB = -1;

    // Find the indices of elements a and b in the globalReferenceArray
    for (int i = 0; i < globalReferenceArray[0]; i++) {
        if (globalReferenceArray[i + 1] == *(int *)a) {
            indexA = i;
        }
        if (globalReferenceArray[i + 1] == *(int *)b) {
            indexB = i;
        }
    }

    // If both elements are found in the globalReferenceArray, compare their indices
    if (indexA != -1 && indexB != -1) {
        return indexA - indexB;
    }

    // If one of the elements is not found, place it at the end
    if (indexA == -1) {
        return 1; // a comes after b
    } else {
        return -1; // a comes before b
    }
}

// Function to sort the array based on the order defined by the globalReferenceArray
void sortByReferenceOrder(int arr[], int n, const int referenceArray[]) {
    // Set the globalReferenceArray before calling qsort
    globalReferenceArray = referenceArray;
    qsort(arr, n, sizeof(int), compare);
}

int main() {
    int arr[] = {2, 1, 4, 3};
    int n = sizeof(arr) / sizeof(arr[0]);

    // Define the order in the referenceArray
    int referenceArray[] = {4, 3, 2, 1};

    sortByReferenceOrder(arr, n, referenceArray);

    printf("Sorted array based on referenceArray order: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }

    return 0;
}
