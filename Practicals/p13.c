#include <stdio.h>
#include <ctype.h> // for isalpha, isdigit

int main() {
    char ch;
    printf("Enter a character: ");
    scanf(" %c", &ch);

    if (isalpha(ch))
        printf("Alphabet\n");
    else if (isdigit(ch))
        printf("Digit\n");
    else
        printf("Special Symbol\n");

    return 0;
}
