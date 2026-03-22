#include <stdio.h>

int main() {
    int x; // * untuk tipe data number/integer menggunakan %d
    char y; // * untuk tipe data char menggunakan %c, scan char itu harus ada spasi di awal %c nya
    float z; // * untuk tipe data float menggunakan %f , 1-4 pembulatan ke bawah , 5-9 pembulatan ke atas

    printf("masukan nilai x : ");
    scanf("%d", &x);
    printf("nilai yang anda masukan adalah : %d", x);

    return 0;
}