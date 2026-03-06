#include <stdio.h>

int tambah(int x, int y) {
    return x + y;
}

int main() {
    int hasil = tambah(10, 5);
    printf("%d", hasil);

    return 0;
}