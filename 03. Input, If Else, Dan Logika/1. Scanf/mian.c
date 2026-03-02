#include <stdio.h>

int main() {
    int umur;

    printf("masukan umur kamu : ");
    scanf("%d", &umur);

    /*
        ? scanf("%d", &umur);
        * %d → tipe data integer yang mau dibaca
        * &umur → alamat memory variabel umur
            * • scanner butuh alamat supaya bisa masukin nilai ke variabel
            * • tanpa & → error
    */

    printf("umur kamu : %d", umur);

    return 0;
}