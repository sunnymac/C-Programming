#include <stdio.h>

int main() {
    char str[50];
    char *p;
    int len = 0;

    printf("Enter a string: ");
    gets(str);

    p = str;  // pointer to first char

    while (*p != '\0') { // until null char
        len++;
        p++;
    }

    printf("Length = %d\n", len);

    return 0;
}
