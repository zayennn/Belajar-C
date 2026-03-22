#include <stdio.h>

int main() {
    int x; // * untuk tipe data number/integer menggunakan %d
    char y; // * untuk tipe data char menggunakan %c
    float z; // * untuk tipe data float menggunakan %f

    printf("masukan nilai x : ");
    scanf("%d", &x);
    printf("nilai yang anda masukan adalah : %d", x);

    return 0;
}