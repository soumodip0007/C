#include<stdio.h>
#include<string.h>

struct employee {
    char name[50];
    int id;
    float salary;
};

int main() {
    struct employee e1;
    
    // e1.name = "Mario";
    strcpy(e1.name, "Mario");
    e1.id = 7;
    e1.salary = 40000.50;

    printf("Employee name = %s\n", e1.name);
    printf("Employee id = %d\n", e1.id);
    printf("Employee salary = %f\n", e1.salary);
    printf("\n");

    struct employee e2;
    
    // e2.name = "Luigi";
    strcpy(e2.name, "Luigi");
    e2.id = 5;
    e2.salary = 35000.50;

    printf("Employee name = %s\n", e2.name);
    printf("Employee id = %d\n", e2.id);
    printf("Employee salary = %f\n", e2.salary);
    printf("\n");

    struct employee e3;
    
    // e3.name = "Shaun";
    strcpy(e3.name, "Shaun");
    e3.id = 2;
    e3.salary = 50000.50;

    printf("Employee name = %s\n", e3.name);
    printf("Employee id = %d\n", e3.id);
    printf("Employee salary = %f\n", e3.salary);

    return 0;
}