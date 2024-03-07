// Arrays are disjoint or not
#include <stdio.h>

int areArraysDisjoint(int arr1[], int size1, int arr2[], int size2) {
    for (int i = 0; i < size1; i++) {
        for (int j = 0; j < size2; j++) {
            if (arr1[i] == arr2[j]) {
                // Found a common element, arrays are not disjoint
                return 0;
            }
        }
    }

    // No common elements found, arrays are disjoint
    return 1;
}

int main() {
    int arr1[] = {1, 2, 3, 4, 5};
    int size1 = sizeof(arr1) / sizeof(arr1[0]);

    int arr2[] = {6, 7, 8, 9, 10};
    int size2 = sizeof(arr2) / sizeof(arr2[0]);

    if (areArraysDisjoint(arr1, size1, arr2, size2)) {
        printf("Arrays are disjoint.\n");
    } else {
        printf("Arrays are not disjoint.\n");
    }

    return 0;
}
