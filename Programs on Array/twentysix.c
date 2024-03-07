// Replace each element of the array by its rank in the array
#include <stdio.h>
#include <stdlib.h>

// Structure to represent an element and its original index
struct Element {
    int value;
    int index;
};

// Comparator function for sorting the array of elements
int compare(const void *a, const void *b) {
    return ((struct Element *)a)->value - ((struct Element *)b)->value;
}

// Function to replace each element with its rank in the array
void replaceWithRank(int arr[], int n) {
    // Create an array of elements, including their original indices
    struct Element elements[n];
    for (int i = 0; i < n; i++) {
        elements[i].value = arr[i];
        elements[i].index = i;
    }

    // Sort the array of elements based on values
    qsort(elements, n, sizeof(struct Element), compare);

    // Replace each element with its rank
    for (int i = 0; i < n; i++) {
        arr[elements[i].index] = i + 1;
    }
}

int main() {
    int arr[] = {40, 10, 20, 30};
    int n = sizeof(arr) / sizeof(arr[0]);

    replaceWithRank(arr, n);

    printf("Array after replacing each element with its rank: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }

    return 0;
}
