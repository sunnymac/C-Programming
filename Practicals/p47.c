#include <stdio.h>
#include <string.h>

struct Student {
    char name[50];
    int roll;
    char grade;
};

int main() {
    struct Student s;

    // input data
    printf("Enter name: ");
    gets(s.name);
    printf("Enter roll number: ");
    scanf("%d", &s.roll);
    printf("Enter grade: ");
    scanf(" %c", &s.grade);

    // output data
    printf("\nStudent Info:\n");
    printf("Name: %s\n", s.name);
    printf("Roll: %d\n", s.roll);
    printf("Grade: %c\n", s.grade);

    return 0;
}
