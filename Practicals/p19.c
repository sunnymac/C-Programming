#include <stdio.h>

int main() {
    int i = 1;

start:  // label
    if (i <= 10) {
        printf("%d ", i);
        i++;
        goto start;  // jump back to label
    }

    return 0;
}
