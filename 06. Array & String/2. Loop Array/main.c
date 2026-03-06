#include <stdio.h>

int main() {
    int angka[5] = {10, 20, 30, 40, 50};
    int length = sizeof(angka) / sizeof(angka[0]);

    for ( int i = 0; length < 5; i++ ) {
        printf("%d\n", angka[i]);
    }

    return 0;
}