#include <stdio.h>

int main() {
    int i, j;

    // Top half
    for(i = 1; i <= 3; i++) {
        // Print spaces
        for(j = 1; j <= 3 - i; j++)
            printf(" ");
        // Print stars
        for(j = 1; j <= 2*i - 1; j++)
            printf("*");
        printf("\n");
    }

    // Bottom half
    for(i = 2; i >= 1; i--) {
        // Print spaces
        for(j = 1; j <= 3 - i; j++)
            printf(" ");
        // Print stars
        for(j = 1; j <= 2*i - 1; j++)
            printf("*");
        printf("\n");
    }

    return 0;
}