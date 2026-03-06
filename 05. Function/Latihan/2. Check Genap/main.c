#include <stdio.h>

int isGenap(int angka) {
    if (angka % 2 == 0) {
        return 1;
    } else {
        return 0;
    }
}

int main() {
    int angka;

    printf("check apakah genap/ganjil : ");
    scanf("%d", &angka);

    int hasil = isGenap(angka);
    printf("%d", hasil);

    return 0;
}