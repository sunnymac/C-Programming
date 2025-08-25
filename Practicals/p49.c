#include <stdio.h>

struct Employee {
    char name[50];
    float salary;
};

// function to input data
void getData(struct Employee *e) {
    printf("Enter name: ");
    scanf("%s", e->name);
    printf("Enter salary: ");
    scanf("%f", &e->salary);
}

// function to display data
void display(struct Employee e) {
    printf("Employee: %s\n", e.name);
    printf("Salary: %.2f\n", e.salary);
}

int main() {
    struct Employee emp;

    getData(&emp);
    printf("\nEmployee Details:\n");
    display(emp);

    return 0;
}
