#include <stdio.h>

int main() {
    int a, b, max, min;

    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);

    max = (a > b) ? a : b;  // conditional operator
    min = (a < b) ? a : b;

    printf("Maximum = %d\n", max);
    printf("Minimum = %d\n", min);

    return 0;
}
