#include <stdio.h>

int main() {
    int n, i = 1, sum = 0;

    printf("Enter n: ");
    scanf("%d", &n);

start:
    if (i <= n) {
        sum += i;
        i++;
        goto start;
    }

    printf("Sum of first %d numbers = %d\n", n, sum);

    return 0;
}
