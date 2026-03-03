#include <stdio.h>

int main() {
    int count = 3;

    for (int i = 1; i <= count; i++) {
        for (int j = 1; j <= count; j++) {
            printf("%d ", j);
        }

        printf("\n");
    }

    return 0;
}