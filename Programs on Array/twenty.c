// Maximum product subarray in a given array
#include <stdio.h>

int maxProductSubarray(int arr[], int n) {
    if (n == 0) {
        return 0;
    }

    // Initialize variables to store the maximum and minimum product ending at the current index
    int maxEndingHere = arr[0];
    int minEndingHere = arr[0];

    // Initialize the maximum product variable
    int maxProduct = arr[0];

    for (int i = 1; i < n; i++) {
        // If the current element is negative, swap maxEndingHere and minEndingHere
        if (arr[i] < 0) {
            int temp = maxEndingHere;
            maxEndingHere = minEndingHere;
            minEndingHere = temp;
        }

        // Update maxEndingHere and minEndingHere based on the current element
        maxEndingHere = (arr[i] > maxEndingHere * arr[i]) ? arr[i] : maxEndingHere * arr[i];
        minEndingHere = (arr[i] < minEndingHere * arr[i]) ? arr[i] : minEndingHere * arr[i];

        // Update maxProduct if needed
        maxProduct = (maxProduct > maxEndingHere) ? maxProduct : maxEndingHere;
    }

    return maxProduct;
}

int main() {
    int arr[] = {2, 3, -2, 4, -1};
    int n = sizeof(arr) / sizeof(arr[0]);

    int result = maxProductSubarray(arr, n);
    
    printf("Maximum product subarray: %d\n", result);

    return 0;
}
