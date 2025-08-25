#include <stdio.h>

int main() {
    FILE *fp;
    int n, i, x;

    fp = fopen("nums.txt", "w");
    printf("How many numbers? ");
    scanf("%d", &n);

    printf("Enter %d numbers: ", n);
    for (i = 0; i < n; i++) {
        scanf("%d", &x);
        fprintf(fp, "%d\n", x); // write integer
    }
    fclose(fp);

    // read back
    fp = fopen("nums.txt", "r");
    printf("\nFile contents:\n");
    while (fscanf(fp, "%d", &x) != EOF) {
        printf("%d ", x);
    }
    fclose(fp);

    return 0;
}
