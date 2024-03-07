// Number of even and odd elements in an array
#include <stdio.h>

void countEvenOdd(int arr[], int n, int *evenCount, int *oddCount) {
    *evenCount = 0;
    *oddCount = 0;

    for (int i = 0; i < n; i++) {
        if (arr[i] % 2 == 0) {
            (*evenCount)++;
        } else {
            (*oddCount)++;
        }
    }
}

int main() {
    int arr[] = {1, 2, 3, 4, 5, 6, 7, 8, 9};
    int n = sizeof(arr) / sizeof(arr[0]);
    int evenCount, oddCount;

    countEvenOdd(arr, n, &evenCount, &oddCount);

    printf("Number of even elements: %d\n", evenCount);
    printf("Number of odd elements: %d\n", oddCount);

    return 0;
}
