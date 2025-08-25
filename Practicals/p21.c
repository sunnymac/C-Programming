#include <stdio.h>

int main() {
    int n, rev = 0, rem;
    printf("Enter a number: ");
    scanf("%d", &n);

    while (n != 0) {
        rem = n % 10;        // take last digit
        rev = rev * 10 + rem; // build reverse
        n /= 10;             // remove last digit
    }

    printf("Reversed number = %d\n", rev);

    return 0;
}
