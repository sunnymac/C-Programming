#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main() {
    char str[50];
    int i;

    printf("Enter a string: ");
    gets(str);

    for (i = 0; str[i] != '\0'; i++) {
        str[i] = toupper(str[i]);  // convert to uppercase
    }

    printf("Uppercase string: %s\n", str);

    return 0;
}
