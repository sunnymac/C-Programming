#include <stdio.h>

// function to calculate average
float avgN(int n) {
    int sum = 0, i;
    for (i = 1; i <= n; i++)
        sum += i;
    return (float)sum / n;
}

int main() {
    int n;
    printf("Enter n: ");
    scanf("%d", &n);

    printf("Average = %.2f\n", avgN(n));
    return 0;
}
