#include <stdio.h>
#include <string.h>

int main() {
    char str[50];
    printf("Enter a string: ");
    gets(str);

    char rev[50];
    strcpy(rev, str);
    strrev(rev);  // reverse

    if (strcmp(str, rev) == 0)
        printf("Palindrome string\n");
    else
        printf("Not Palindrome\n");

    return 0;
}
