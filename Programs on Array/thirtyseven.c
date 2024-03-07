// Median of two sorted arrays
#include <stdio.h>
#include <limits.h>
#include <float.h>
#include<math.h>

// Function to find the median of two sorted arrays
double findMedianSortedArrays(int arr1[], int m, int arr2[], int n) {
    // Ensure arr1 is the smaller array
    if (m > n) {
        int* tempArr = arr1;
        arr1 = arr2;
        arr2 = tempArr;

        int tempSize = m;
        m = n;
        n = tempSize;
    }

    int low = 0, high = m;

    while (low <= high) {
        int partitionX = (low + high) / 2;
        int partitionY = (m + n + 1) / 2 - partitionX;

        // Find elements on the left and right sides of the partitions
        int maxX = (partitionX == 0) ? INT_MIN : arr1[partitionX - 1];
        int minX = (partitionX == m) ? INT_MAX : arr1[partitionX];
        int maxY = (partitionY == 0) ? INT_MIN : arr2[partitionY - 1];
        int minY = (partitionY == n) ? INT_MAX : arr2[partitionY];

        // Check if we have found the correct partitions
        if (maxX <= minY && maxY <= minX) {
            // Found the correct partitions
            if ((m + n) % 2 == 0) {
                // Even number of elements, return the average of the middle elements
                return (double)(fmax(maxX, maxY) + fmin(minX, minY)) / 2;
            } else {
                // Odd number of elements, return the middle element
                return (double)fmax(maxX, maxY);
            }
        } else if (maxX > minY) {
            // Move the partition to the left in arr1
            high = partitionX - 1;
        } else {
            // Move the partition to the right in arr1
            low = partitionX + 1;
        }
    }

    // If we reach here, the input arrays are not sorted, or they are not sorted in ascending order
    printf("Input arrays are not sorted or not sorted in ascending order.\n");
    return -1;
}

int main() {
    int arr1[] = {1, 3};
    int m = sizeof(arr1) / sizeof(arr1[0]);

    int arr2[] = {2};
    int n = sizeof(arr2) / sizeof(arr2[0]);

    double result = findMedianSortedArrays(arr1, m, arr2, n);

    if (result != -1) {
        printf("Median of the two sorted arrays: %.2f\n", result);
    }

    return 0;
}
