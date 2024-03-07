// Longest subarray having an average greater than or equal to k
#include <stdio.h>

// Function to find the longest subarray with average >= k
void longestSubarrayWithAverage(int arr[], int n, int k) {
    int start = 0;    // Start of the current subarray
    int end = 0;      // End of the current subarray
    int currentSum = 0; // Sum of the current subarray
    int maxLength = 0;  // Length of the longest subarray

    for (end = 0; end < n; end++) {
        currentSum += arr[end];

        // Check if the average is >= k
        while ((double)currentSum / (end - start + 1) < k) {
            currentSum -= arr[start];
            start++;
        }

        // Update the maxLength if the current subarray is longer
        if (end - start + 1 > maxLength) {
            maxLength = end - start + 1;
        }
    }

    printf("Length of the longest subarray with average >= %d: %d\n", k, maxLength);
}

int main() {
    int arr[] = {1, 12, -5, -6, 50, 3};
    int n = sizeof(arr) / sizeof(arr[0]);
    int k = 4;

    longestSubarrayWithAverage(arr, n, k);

    return 0;
}
