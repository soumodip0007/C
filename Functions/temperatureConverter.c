#include<stdio.h>

float temperature(float celsius);

int main() {
    float fahrenheit = temperature(33);
    printf("fahrenheit : %f", fahrenheit);
    return 0;
}

float temperature(float celsius) {
    float fahrenheit = celsius * (9.0/5.0) + 32;
    return fahrenheit;
}