#include<stdio.h>
#include<string.h>

struct employee {
    char name[50];
    int id;
    float salary;
};

int main() {
    struct employee e1 = {"Mario", 7, 40000.50};
    struct employee e2 = {"Luigi", 5, 35000.50};
    struct employee e3 = {"Shaun", 2, 50000.50};

    printf("Details of first employee : %s, %d, %f\n", e1.name, e1.id, e1.salary);
    printf("Details of second employee : %s, %d, %f\n", e2.name, e2.id, e2.salary);
    printf("Details of third employee : %s, %d, %f\n", e3.name, e3.id, e3.salary);

    return 0;
}