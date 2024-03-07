#include <stdio.h>
#include <string.h>

struct Student {
    int studentID;
    char name[50];
    int age;
    float GPA;
};

struct Teacher {
    int teacherID;
    char name[50];
    int age;
    char subject[50];
};

struct Staff {
    int staffID;
    char name[50];
    int age;
    char department[50];
};

int main() {
    struct Student student1 = {1, "Mario", 20, 3.5};
    struct Student student2 = {2, "Luigi", 21, 3.8};

    struct Teacher teacher1 = {101, "Goku", 35, "Math"};
    struct Teacher teacher2 = {102, "Vegeta", 40, "English"};

    struct Staff staff1 = {201, "Souvik", 30, "Administration"};
    struct Staff staff2 = {202, "Siddartha", 28, "Finance"};

    printf("Student Information:\n");
    printf("ID: %d, Name: %s, Age: %d, GPA: %.2f\n", student1.studentID, student1.name, student1.age, student1.GPA);
    printf("ID: %d, Name: %s, Age: %d, GPA: %.2f\n", student2.studentID, student2.name, student2.age, student2.GPA);

    printf("\nTeacher Information:\n");
    printf("ID: %d, Name: %s, Age: %d, Subject: %s\n", teacher1.teacherID, teacher1.name, teacher1.age, teacher1.subject);
    printf("ID: %d, Name: %s, Age: %d, Subject: %s\n", teacher2.teacherID, teacher2.name, teacher2.age, teacher2.subject);

    printf("\nStaff Information:\n");
    printf("ID: %d, Name: %s, Age: %d, Department: %s\n", staff1.staffID, staff1.name, staff1.age, staff1.department);
    printf("ID: %d, Name: %s, Age: %d, Department: %s\n", staff2.staffID, staff2.name, staff2.age, staff2.department);

    return 0;
}
