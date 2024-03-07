#include<stdio.h>
#include<string.h>

struct employee {
    char name[50];
    int id;
    int salary;
};

void func(struct employee e1);

int main() {
    struct employee e1 = {"Mario", 7, 40000};
    func(e1);
    // e1.id = 10;
    // printf("Employee id = %d\n", e1.id);

    return 0;
}

void func(struct employee e1) {
    printf("Employee information : \n");
    printf("employee name = %s\n", e1.name);
    printf("employee id  = %d\n", e1.id);
    printf("employee salary = %d\n", e1.salary);

    // e1.id = 10;
}