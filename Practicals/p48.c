#include <stdio.h>

struct Marks {
    int math, sci, eng;
};

struct Student {
    char name[50];
    int roll;
    struct Marks m;
};

int main() {
    struct Student s[3];
    int i, total[3], maxIndex = 0;

    for (i = 0; i < 3; i++) {
        printf("Enter name: ");
        scanf("%s", s[i].name);
        printf("Enter roll: ");
        scanf("%d", &s[i].roll);
        printf("Enter marks (math sci eng): ");
        scanf("%d %d %d", &s[i].m.math, &s[i].m.sci, &s[i].m.eng);

        total[i] = s[i].m.math + s[i].m.sci + s[i].m.eng;
        if (total[i] > total[maxIndex])
            maxIndex = i;
    }

    printf("\nTopper: %s (Roll %d) with total %d\n",
           s[maxIndex].name, s[maxIndex].roll, total[maxIndex]);

    return 0;
}
