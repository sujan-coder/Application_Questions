#include <stdio.h>

int main() {
    int n, i, j;

    printf("Enter n value: ");
    scanf("%d", &n);

    for (i = 1; i <= n; i++) {
        // Print increasing numbers
        for (j = 1; j <= i; j++) {
            printf("%d", j);
            if (j < i) {
                printf(" ");
            }
        }

        // Print spaces in the middle
        for (j = 1; j <= 2 * (n - i); j++) {
            printf("  ");
        }

        // Print decreasing numbers
        for (j = i; j >= 1; j--) {
            printf("%d", j);
            if (j > 1) {
                printf(" ");
            }
        }

        // Move to the next line
        printf("\n");
    }

    return 0;
}
