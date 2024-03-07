// Sum of all odd frequency elements in an array
#include <stdio.h>
#include <stdlib.h>

// Structure to represent a key-value pair in the hash table
struct KeyValuePair {
    int key;
    int value;
};

// Function to calculate the hash value for a given key
int hash(int key, int size) {
    return abs(key) % size;
}

// Function to find the sum of all elements with an odd frequency
int sumOfOddFrequency(int arr[], int n) {
    const int hashTableSize = 1000; // Choose an appropriate size based on the range of array values
    struct KeyValuePair hashTable[hashTableSize];

    // Initialize the hash table
    for (int i = 0; i < hashTableSize; i++) {
        hashTable[i].key = 0;
        hashTable[i].value = 0;
    }

    // Populate the hash table with frequency information
    for (int i = 0; i < n; i++) {
        int key = arr[i];
        int index = hash(key, hashTableSize);

        // Update the frequency count
        hashTable[index].key = key;
        hashTable[index].value++;
    }

    // Calculate the sum of elements with an odd frequency
    int sum = 0;
    for (int i = 0; i < hashTableSize; i++) {
        if (hashTable[i].key != 0 && hashTable[i].value % 2 != 0) {
            sum += hashTable[i].key;
        }
    }

    return sum;
}

int main() {
    int arr[] = {1, 2, 3, 2, 3, 1, 3};
    int n = sizeof(arr) / sizeof(arr[0]);

    int result = sumOfOddFrequency(arr, n);

    printf("Sum of elements with odd frequency: %d\n", result);

    return 0;
}
