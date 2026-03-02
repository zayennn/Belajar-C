#include <stdio.h>

int main() {
    int nilai;
    printf("masukan nilai ujian : ");
    scanf("%d", &nilai);

    if ( nilai >= 75 ) {
        printf("lulus");
    } else {
        printf("tidak lulus");
    }

    /*
        ? penjelasan :
        * if → kondisi pertama
        * else → kondisi lain jika if salah
        * kondisi = ekspresi yang bernilai 0 (false) atau 1 (true)
    */

    return 0;
}