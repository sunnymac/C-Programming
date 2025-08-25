#include <stdio.h>
#include <ctype.h> // for toupper()

int main() {
    char ch;
    printf("Enter a lowercase letter: ");
    scanf(" %c", &ch);

    printf("Uppercase letter: %c\n", toupper(ch));

    return 0;
}
