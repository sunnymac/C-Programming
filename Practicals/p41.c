#include <stdio.h>
#include <string.h>

int main() {
    char str[50];
    printf("Enter a string: ");
    gets(str);

    strrev(str);  // reverse string (works in Turbo C/Windows compilers)

    printf("Reversed string: %s\n", str);

    return 0;
}
