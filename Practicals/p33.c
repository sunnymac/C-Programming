#include <stdio.h>

int main() {
    int arr[5], i, j, temp;

    printf("Enter 5 numbers: ");
    for (i = 0; i < 5; i++)
        scanf("%d", &arr[i]);

    // Bubble sort
    for (i = 0; i < 5 - 1; i++) {
        for (j = 0; j < 5 - i - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }

    printf("Sorted numbers: ");
    for (i = 0; i < 5; i++)
        printf("%d ", arr[i]);

    return 0;
}
