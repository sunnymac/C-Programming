#include <stdio.h>
#include <string.h>

int main() {
    char str[50];
    printf("Enter a string: ");
    gets(str);

    printf("Length = %d\n", strlen(str));

    return 0;
}
