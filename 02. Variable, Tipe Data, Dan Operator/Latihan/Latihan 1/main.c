#include <stdio.h>

int main() {
    int x = 10;
    int y = 3;

    printf("hasil dari %d + %d = %d\n", x, y, ( x + y ));
    printf("hasil dari %d - %d = %d\n", x, y, ( x - y ));
    printf("hasil dari %d × %d = %d\n", x, y, ( x * y ));

    float hasil_bagi = (float) x / y;

    return 0;
}