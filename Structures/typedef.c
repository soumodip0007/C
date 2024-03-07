#include<stdio.h>
#include<string.h>

typedef struct employee {
    char name[50];
    int id;
    int salary;
} emp;

typedef struct intern {
    char name[50];
    int id;
    int salary;
} itrn;

int main() {
    itrn i1;
    strcpy(i1.name, "Goku");
    i1.id = 9;
    i1.salary = 10000;

    printf("Details of intern is :- \n");
    printf("Name of intern is : %s\n", i1.name);
    printf("Id of intern is : %d\n", i1.id);
    printf("Salary of intern is %d: \n", i1.salary);

    return 0;
}
