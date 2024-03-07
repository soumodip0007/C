#include<stdio.h>
void display(char name[], int age) {
  printf("Hello %s. You are %d years old.\n", name, age);
}

int main() {
  display("Mario", 20);
  display("Luigi", 22);
  display("Shaun", 24);
  return 0;
}
