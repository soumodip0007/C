#include<stdio.h>

int percentage(int physics, int computer_science, int math);

int main() {
    int physics;
    int computer_science;
    int math;

    printf("Enter your marks in Physics\n");
    scanf("%d", &physics);

    printf("Enter your marks in Computer-Science\n");
    scanf("%d", &computer_science);

    printf("Enter your marks in Math\n");
    scanf("%d", &math);

    printf("Total percentage is : %d", percentage(physics, computer_science, math));
    return 0;
}

int percentage(int physics, int computer_science, int math) {
    return ((physics + computer_science + math) /3);
}