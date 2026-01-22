#include <stdio.h>

int main() {
    int n = 4;   // matrix size
    int i, j;

    for (i = 1; i <= n; i++) {
        for (j = 1; j <= n; j++) {

            if (i % 2 == 0 && j % 2 == 0) {
                printf("0 ");
            } else {
                printf("1 ");
            }

        }
        printf("\n");
    }

    return 0;
}