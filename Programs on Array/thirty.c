// Juggling algorithm for array rotation
// The Juggling Algorithm is another efficient method for rotating an array in-place. 
// It is based on the concept of cyclic replacements.
#include <stdio.h>

// Function to find the greatest common divisor (GCD) of two numbers
int gcd(int a, int b) {
    if (b == 0) {
        return a;
    } else {
        return gcd(b, a % b);
    }
}

// Function to perform array rotation using the Juggling Algorithm
void jugglingRotate(int arr[], int n, int d) {
    d = d % n; // Handle cases where d is greater than n

    int sets = gcd(n, d);

    for (int i = 0; i < sets; i++) {
        int temp = arr[i];
        int j = i;

        while (1) {
            int k = (j + d) % n;

            if (k == i) {
                break;
            }

            arr[j] = arr[k];
            j = k;
        }

        arr[j] = temp;
    }
}

int main() {
    int arr[] = {1, 2, 3, 4, 5};
    int n = sizeof(arr) / sizeof(arr[0]);
    int d = 2; // Number of positions to rotate

    printf("Original array: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    jugglingRotate(arr, n, d);

    printf("Array after rotation: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}
