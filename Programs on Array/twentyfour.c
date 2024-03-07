// Sorting elements of an array by frequency
#include <stdio.h>
#include <stdlib.h>

// Structure to represent an element and its frequency
struct Element {
    int value;
    int frequency;
};

// Comparator function for sorting the array of elements
int compare(const void *a, const void *b) {
    return ((struct Element *)b)->frequency - ((struct Element *)a)->frequency;
}

// Function to sort elements by frequency
void sortByFrequency(int arr[], int n) {
    // Create an array of elements
    struct Element elements[n];
    for (int i = 0; i < n; i++) {
        elements[i].value = arr[i];
        elements[i].frequency = 0;
    }

    // Count the frequency of each element
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            if (elements[j].value == arr[i]) {
                elements[j].frequency++;
                break;
            }
        }
    }

    // Sort the array of elements based on frequency
    qsort(elements, n, sizeof(struct Element), compare);

    // Modify the original array with sorted elements
    int index = 0;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < elements[i].frequency; j++) {
            arr[index++] = elements[i].value;
        }
    }
}

int main() {
    int arr[] = {4, 2, 4, 8, 3, 3, 1, 1, 1, 2};
    int n = sizeof(arr) / sizeof(arr[0]);

    sortByFrequency(arr, n);

    printf("Sorted array by frequency: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }

    return 0;
}
