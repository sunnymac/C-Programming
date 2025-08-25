#include <stdio.h>

// function to return sum of first n numbers
int addN(int n) {
    int sum = 0, i;
    for (i = 1; i <= n; i++)
        sum += i;
    return sum;
}

int main() {
    int n;
    printf("Enter n: ");
    scanf("%d", &n);

    printf("Sum = %d\n", addN(n));
    return 0;
}
