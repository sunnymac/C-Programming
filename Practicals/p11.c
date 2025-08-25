#include <stdio.h>

int main() {
    int a = 5, b = 3;

    printf("a & b = %d\n", a & b);   // AND
    printf("a | b = %d\n", a | b);   // OR
    printf("a ^ b = %d\n", a ^ b);   // XOR
    printf("~a = %d\n", ~a);         // NOT
    printf("a << 1 = %d\n", a << 1); // Left Shift
    printf("a >> 1 = %d\n", a >> 1); // Right Shift

    return 0;
}
