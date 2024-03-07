// Minimum sum of absolute difference of given array
#include <stdio.h>
#include <stdlib.h>

// Comparator function for sorting
int compare(const void *a, const void *b) {
    return (*(int *)a - *(int *)b);
}

int minSumOfAbsoluteDifferences(int arr[], int n) {
    // Create a copy of the array and sort it
    int sortedArr[n];
    for (int i = 0; i < n; i++) {
        sortedArr[i] = arr[i];
    }
    qsort(sortedArr, n, sizeof(int), compare);

    // Calculate the sum of absolute differences
    int sum = 0;
    for (int i = 0; i < n - 1; i++) {
        sum += abs(sortedArr[i] - sortedArr[i + 1]);
    }

    return sum;
}

int main() {
    int arr[] = {4, 2, 1, 8, 6};
    int n = sizeof(arr) / sizeof(arr[0]);

    int result = minSumOfAbsoluteDifferences(arr, n);

    printf("Minimum sum of absolute differences: %d\n", result);

    return 0;
}
