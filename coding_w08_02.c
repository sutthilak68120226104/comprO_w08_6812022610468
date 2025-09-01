#include <stdio.h>
int main() {
    int start, stop;

    printf("Enter start number: ");

    scanf("%d", &start);

    printf("Enter stop number: ");

    scanf("%d", &stop);

    printf("Start number is %d and stop number is %d\n", start, stop);

    printf("-------------\n");

    printf("Sequence from start to stop: ");

    for (int i = start; i <= stop; i++) {

        printf("%d ", i);
    }

    printf("\nThank you.\n");
    return 0;
}