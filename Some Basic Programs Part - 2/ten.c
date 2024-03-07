// Maximum number of handshakes
#include <stdio.h>

// Function to calculate the factorial of a number
unsigned long long factorial(int n) {
    if (n == 0 || n == 1) {
        return 1;
    } else {
        return n * factorial(n - 1);
    }
}

// Function to calculate the combination C(n, k)
unsigned long long combination(int n, int k) {
    return factorial(n) / (factorial(k) * factorial(n - k));
}

// Function to calculate the maximum number of handshakes
unsigned long long maxHandshakes(int numPeople) {
    return combination(numPeople, 2);
}

int main() {
    int numPeople;

    // Input the number of people
    printf("Enter the number of people: ");
    scanf("%d", &numPeople);

    // Calculate and display the maximum number of handshakes
    unsigned long long maxHandshakesCount = maxHandshakes(numPeople);
    printf("Maximum number of handshakes: %llu\n", maxHandshakesCount);

    return 0;
}
