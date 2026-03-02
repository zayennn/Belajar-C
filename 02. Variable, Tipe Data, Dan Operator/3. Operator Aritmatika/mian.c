#include <stdio.h>

int main() {
    int a = 10;
    int b = 3;
    
    printf("a + b = %d\n", a + b); // Penjumlahan
    printf("a - b = %d\n", a - b); // Pengurangan
    printf("a * b = %d\n", a * b); // Perkalian
    printf("a / b = %d\n", a / b); // Pembagian
    printf("a %% b = %d\n", a % b); // Modulus (sisa pembagian)

    /*
        * Penjelasan Operator:
        * + → operator penjumlahan
        * - → operator pengurangan
        * * → operator perkalian
        * / → operator pembagian
        * % → operator modulus (sisa pembagian)
        todo Operator aritmatika digunakan untuk melakukan operasi matematika pada variabel atau nilai.
    */

    /*
        * perhatikan ini :
        ? 10 / 3 = 3
        * Kenapa bukan 3.333 ?
        * karena dua-duanya int, c tidak otomatis bikin desimal.
        ? kalo mau desimal :
        * float hasil = (float) a / b; // ? kita harus cast salah satu nya ke float. ini nama nya casting
    */

    return 0;
}