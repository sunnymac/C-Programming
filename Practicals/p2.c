#include <stdio.h>

int main() {
    int a, b, c, d, e;
    float avg;

    // Input 5 numbers
    printf("Enter 5 numbers: ");
    scanf("%d %d %d %d %d", &a, &b, &c, &d, &e);

    // Calculate average
    avg = (a + b + c + d + e) / 5.0;

    // Print result
    printf("Average = %.2f\n", avg);

    return 0;
}
