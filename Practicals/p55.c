#include <stdio.h>

struct Student {
    char name[50];
    int roll;
    float marks;
};

int main() {
    int n, i;
    struct Student s[50];  // max 50 students

    printf("Enter number of students: ");
    scanf("%d", &n);

    for (i = 0; i < n; i++) {
        printf("\nEnter name: ");
        scanf("%s", s[i].name);
        printf("Enter roll: ");
        scanf("%d", &s[i].roll);
        printf("Enter marks: ");
        scanf("%f", &s[i].marks);
    }

    printf("\n--- Student List ---\n");
    for (i = 0; i < n; i++) {
        printf("Name: %s, Roll: %d, Marks: %.2f\n",
               s[i].name, s[i].roll, s[i].marks);
    }

    return 0;
}
