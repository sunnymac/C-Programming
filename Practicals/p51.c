#include <stdio.h>

// Call by Value (won't affect original variables)
void swapByValue(int a, int b) {
    int temp = a;
    a = b;
    b = temp;
    printf("Inside swapByValue: a=%d, b=%d\n", a, b);
}

// Call by Reference (affects original variables)
void swapByRef(int *a, int *b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

int main() {
    int x = 10, y = 20;

    printf("Before Swap: x=%d, y=%d\n", x, y);
    swapByValue(x, y);  // no change in main
    printf("After swapByValue: x=%d, y=%d\n", x, y);

    swapByRef(&x, &y);  // changes in main
    printf("After swapByRef: x=%d, y=%d\n", x, y);

    return 0;
}
