#include<stdio.h>
#include<string.h>

struct employee {
    char name[50];
    int id;
    int salary;
    char designation[50];
};

void empDetails(struct employee emp);

int main() {
    struct employee emps[5];
    printf("Enter details for employee 1 :- \n");
    scanf("%s", emps[0].name);
    scanf("%d", &emps[0].id);
    scanf("%d", &emps[0].salary);
    scanf("%s", emps[0].designation);

    printf("Enter details for employee 2 :- \n");
    scanf("%s", emps[1].name);
    scanf("%d", &emps[1].id);
    scanf("%d", &emps[1].salary);
    scanf("%s", emps[1].designation);

    printf("Enter details for employee 3 :- \n");
    scanf("%s", emps[2].name);
    scanf("%d", &emps[2].id);
    scanf("%d", &emps[2].salary);
    scanf("%s", emps[2].designation);

    printf("Enter details for employee 4 :- \n");
    scanf("%s", emps[3].name);
    scanf("%d", &emps[3].id);
    scanf("%d", &emps[3].salary);
    scanf("%s", emps[3].designation);

    printf("Enter details for employee 5 :- \n");
    scanf("%s", emps[4].name);
    scanf("%d", &emps[4].id);
    scanf("%d", &emps[4].salary);
    scanf("%s", emps[4].designation);

    empDetails(emps[0]);
    empDetails(emps[1]);
    empDetails(emps[2]);
    empDetails(emps[3]);
    empDetails(emps[4]);

    return 0;
}

void empDetails(struct employee emp) {
    printf("Details is : %s, %d, %d, %s\n", emp.name, emp.id, emp.salary, emp.designation);
}