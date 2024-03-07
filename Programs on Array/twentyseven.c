// Equilibrium index of an array
#include <stdio.h>

int findEquilibriumIndex(int arr[], int n) {
    int totalSum = 0;
    int leftSum = 0;

    // Calculate the total sum of the array
    for (int i = 0; i < n; i++) {
        totalSum += arr[i];
    }

    // Traverse the array and find the equilibrium index
    for (int i = 0; i < n; i++) {
        // Update the total sum by subtracting the current element
        totalSum -= arr[i];

        // If the left sum is equal to the total sum, we found the equilibrium index
        if (leftSum == totalSum) {
            return i;
        }

        // Update the left sum by adding the current element
        leftSum += arr[i];
    }

    // If no equilibrium index is found, return -1
    return -1;
}

int main() {
    int arr[] = {-7, 1, 5, 2, -4, 3, 0};
    int n = sizeof(arr) / sizeof(arr[0]);

    int equilibriumIndex = findEquilibriumIndex(arr, n);

    if (equilibriumIndex != -1) {
        printf("Equilibrium Index: %d\n", equilibriumIndex);
    } else {
        printf("No equilibrium index found.\n");
    }

    return 0;
}
