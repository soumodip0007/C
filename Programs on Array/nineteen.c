// Symmetric pairs in an array
#include <stdio.h>

struct Pair {
    int first;
    int second;
};

void findSymmetricPairs(int arr[][2], int n) {
    // Traverse the array and check for symmetric pairs
    for (int i = 0; i < n; i++) {
        for (int j = i + 1; j < n; j++) {
            if (arr[i][0] == arr[j][1] && arr[i][1] == arr[j][0]) {
                printf("Symmetric Pair: (%d, %d) and (%d, %d)\n",
                       arr[i][0], arr[i][1], arr[j][0], arr[j][1]);
            }
        }
    }
}

int main() {
    int arr[][2] = {{1, 3}, {7, 8}, {3, 1}, {8, 7}, {2, 5}, {5, 2}};
    int n = sizeof(arr) / sizeof(arr[0]);

    findSymmetricPairs(arr, n);

    return 0;
}
