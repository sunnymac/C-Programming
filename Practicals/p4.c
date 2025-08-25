#include <stdio.h>

int main() {
    int years;
    long int minutes;

    printf("Enter number of years: ");
    scanf("%d", &years);

    // 1 year = 365 days = 365*24*60 minutes
    minutes = (long int)years * 365 * 24 * 60;

    printf("%d years = %ld minutes\n", years, minutes);

    return 0;
}
