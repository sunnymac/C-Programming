#include <stdio.h>

int main() {
    int a = 10;
    int *p; // pointer

    p = &a; // store address of a

    printf("Value of a = %d\n", a);
    printf("Address of a = %p\n", &a);
    printf("Value of p (address stored) = %p\n", p);
    printf("Value at p = %d\n", *p); // dereference pointer

    return 0;
}
