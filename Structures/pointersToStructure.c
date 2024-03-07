#include<stdio.h>
#include<string.h>

struct employee {
    char name[50];
    int id;
    float salary;
};

int main() {
    struct employee e1 = {"Mario", 7, 40000.50};
    printf("Details of first employee : %s, %d, %f\n", e1.name, e1.id, e1.salary);

    struct employee *ptr = &e1;
    printf("employee id with . operator = %d\n", (*ptr).id);
    printf("employee id with -> operator = %d\n", ptr->id);

    return 0;
}