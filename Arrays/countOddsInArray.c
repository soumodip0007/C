#include<stdio.h>

int oddsInArray(int arr[], int n);

int main() {
    int arr[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    printf("%d", oddsInArray(arr, 10));
    return 0;
}

int oddsInArray(int arr[], int n) {
    int count = 0;
    for(int i= 0; i<n; i++) {
        if(arr[i] % 2 != 0) { // checking odds
            count = count + 1;
        }
    }

    return count;
}