#include <stdio.h>

int main() {
    for (int i = 1; i <= 10; i++) {
        printf("print menggunakan for loop ke - %d\n", i);
    }

    int count = 1;
    while (count <= 10) {
        printf("print menggunakan while ke - %d\n", count);
        count++;
    }

    return 0;
}