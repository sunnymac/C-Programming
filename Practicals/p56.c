#include <stdio.h>

int main() {
    FILE *fp1, *fp2;
    char ch;

    fp1 = fopen("source.txt", "r");
    fp2 = fopen("dest.txt", "w");

    while ((ch = fgetc(fp1)) != EOF) {
        fputc(ch, fp2);
    }

    printf("File copied successfully!\n");

    fclose(fp1);
    fclose(fp2);
    return 0;
}
