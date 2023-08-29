#include <stdio.h>

int main() {
    int n = 5;

    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= n; j++) {
            if (i >= 1 && i <= 4) {
                if (j >= 2 && j <= 4) {
                    printf("  ");
                } else {
                    printf("* ");
                }
            } else {
                printf("* ");
            }
        }
        printf("\n");
    }

    return 0;
}
