// Frequency of each element of an array
#include <stdio.h>

void findFrequency(int arr[], int n) {
    // Mark all elements as not visited
    int visited[n];
    for (int i = 0; i < n; i++) {
        visited[i] = 0;
    }

    // Traverse the array
    for (int i = 0; i < n; i++) {
        // Skip if the element is already visited
        if (visited[i] == 1) {
            continue;
        }

        // Count the frequency of the current element
        int count = 1;
        for (int j = i + 1; j < n; j++) {
            if (arr[i] == arr[j]) {
                visited[j] = 1;
                count++;
            }
        }

        // Print the frequency of the current element
        printf("Element %d occurs %d times\n", arr[i], count);
    }
}

int main() {
    int arr[] = {4, 2, 3, 4, 1, 2, 5, 3, 4, 2};
    int n = sizeof(arr) / sizeof(arr[0]);

    findFrequency(arr, n);

    return 0;
}
