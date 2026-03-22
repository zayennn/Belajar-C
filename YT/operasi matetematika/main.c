#include <stdio.h>

int main() {
    float x, y;

    printf("selamat datang di program operasi matematika!\n\n");

    printf("masukan nilai pertama : ");
    scanf("%f", &x);

    printf("masukan nilai kedua : ");
    scanf("%f", &y);

    printf("hasil dari %f ÷ %f = %.2f", x, y, (x + y));

    // penjumlahan = +
    // pengurangan = -
    // perkalian = *
    // pembagian = /
    // modulus = %
}