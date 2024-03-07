// Triplets with a given sum
#include <stdio.h>

void findTriplets(int arr[], int n, int targetSum) {
    int i, j, k;

    for (i = 0; i < n - 2; i++) {
        for (j = i + 1; j < n - 1; j++) {
            for (k = j + 1; k < n; k++) {
                if (arr[i] + arr[j] + arr[k] == targetSum) {
                    printf("Triplet found: %d, %d, %d\n", arr[i], arr[j], arr[k]);
                }
            }
        }
    }
}

int main() {
    int arr[] = {1, 4, 45, 6, 10, 8};
    int n = sizeof(arr) / sizeof(arr[0]);
    int targetSum = 22;

    findTriplets(arr, n, targetSum);

    return 0;
}
