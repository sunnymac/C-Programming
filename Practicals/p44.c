#include <stdio.h>

// function to check odd or even
void checkOddEven(int n) {
    if (n % 2 == 0)
        printf("%d is Even\n", n);
    else
        printf("%d is Odd\n", n);
}

int main() {
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);

    checkOddEven(n);  // function call
    return 0;
}
