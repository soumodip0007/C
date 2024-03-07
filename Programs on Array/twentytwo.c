// Array is a subset of another array or not
#include <stdio.h>

int isSubset(int arr1[], int size1, int arr2[], int size2) {
    // Traverse each element of arr2
    for (int i = 0; i < size2; i++) {
        int found = 0;

        // Check if the current element of arr2 is present in arr1
        for (int j = 0; j < size1; j++) {
            if (arr2[i] == arr1[j]) {
                found = 1;
                break;
            }
        }

        // If the current element of arr2 is not found in arr1, arr2 is not a subset
        if (!found) {
            return 0;
        }
    }

    // If all elements of arr2 are found in arr1, arr2 is a subset
    return 1;
}

int main() {
    int arr1[] = {1, 2, 3, 4, 5, 6, 7, 8, 9};
    int size1 = sizeof(arr1) / sizeof(arr1[0]);

    int arr2[] = {3, 6, 9};
    int size2 = sizeof(arr2) / sizeof(arr2[0]);

    if (isSubset(arr1, size1, arr2, size2)) {
        printf("arr2 is a subset of arr1.\n");
    } else {
        printf("arr2 is not a subset of arr1.\n");
    }

    return 0;
}
