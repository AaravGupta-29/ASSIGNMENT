#include <stdio.h>

struct Employee {
    int id;
    char name[50];
    float salary;
};

int main() {
    int N;
    float givenSalary;

    printf("Enter the number of employees: ");
    scanf("%d", &N);

    struct Employee employees[N];

    printf("Enter the details of employees:\n");
    for (int i = 0; i < N; i++) {
        printf("Employee %d:\n", i + 1);
        printf("ID: ");
        scanf("%d", &employees[i].id);
        printf("Name: ");
        scanf("%s", employees[i].name);
        printf("Salary: ");
        scanf("%f", &employees[i].salary);
    }

    printf("Enter the salary threshold: ");
    scanf("%f", &givenSalary);

    printf("Employees with salary less than %.2f:\n", givenSalary);
    for (int i = 0; i < N; i++) {
        if (employees[i].salary < givenSalary) {
            printf("ID: %d\n", employees[i].id);
            printf("Name: %s\n", employees[i].name);
            printf("Salary: %.2f\n", employees[i].salary);
        }
    }

    return 0;
}

