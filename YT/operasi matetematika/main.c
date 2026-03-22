#include <stdio.h>

int main() {
    int x, y;

    printf("selamat datang di program operasi matematika!\n\n");

    printf("masukan nilai pertama : ");
    scanf("%d", &x);

    printf("masukan nilai kedua : ");
    scanf("%d", &y);

    printf("hasil dari %d + %d = %d", x, y, (x + y));
}