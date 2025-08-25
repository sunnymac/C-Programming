#include <stdio.h>

int main() {
    int n, i, isPrime = 1;
    printf("Enter a number: ");
    scanf("%d", &n);

    if (n <= 1)
        isPrime = 0;
    else {
        for (i = 2; i <= n / 2; i++) {
            if (n % i == 0) {
                isPrime = 0;
                break;
            }
        }
    }

    if (isPrime)
        printf("%d is Prime\n", n);
    else
        printf("%d is NOT Prime\n", n);

    return 0;
}
