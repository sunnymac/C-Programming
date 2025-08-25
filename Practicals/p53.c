#include <stdio.h>

int main() {
    FILE *fp;
    char ch;

    // open file in write mode
    fp = fopen("chars.txt", "w");
    printf("Enter characters (end with #): ");
    while ((ch = getchar()) != '#') {
        fputc(ch, fp);
    }
    fclose(fp);

    // read file
    fp = fopen("chars.txt", "r");
    printf("\nFile contents:\n");
    while ((ch = fgetc(fp)) != EOF) {
        putchar(ch);
    }
    fclose(fp);

    return 0;
}
