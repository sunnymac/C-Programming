#include <stdio.h>

int main() {
    int a[3][3], t[3][3], i, j;

    printf("Enter 3x3 matrix:\n");
    for (i = 0; i < 3; i++) {
        for (j = 0; j < 3; j++) {
            scanf("%d", &a[i][j]);
            t[j][i] = a[i][j]; // transpose during input
        }
    }

    printf("Original Matrix:\n");
    for (i = 0; i < 3; i++) {
        for (j = 0; j < 3; j++)
            printf("%d ", a[i][j]);
        printf("\n");
    }

    printf("Transpose Matrix:\n");
    for (i = 0; i < 3; i++) {
        for (j = 0; j < 3; j++)
            printf("%d ", t[i][j]);
        printf("\n");
    }

    return 0;
}
