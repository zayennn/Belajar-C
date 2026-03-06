#include <stdio.h>

int main() {
    int angka[3];

    for ( int i = 0; i < 3; i++ ) {
        printf("nilai %d : ", i + 1);
        scanf("%d", &angka[i]);
    }

    for ( int i = 0; i < 3; i++ ) {
        printf("%d\n", angka[i]);
    }

    return 0;
}