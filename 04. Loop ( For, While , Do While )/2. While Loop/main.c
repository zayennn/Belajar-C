// * struktur dasar while loop :
/*
    ? while (kondisi) {
    ?     eksekusi code;
    ? }
*/

#include <stdio.h>

int main() {
    int i = 0;

    while (i < 5) {
        i++;
        printf("hello world ke - %d \n", i);
    }
    
    return 0;
}

// * beda nya dengan for :
// for lebih enak buat jumlah pasti
// while lebih enak untuk kondisi

// todo wajib ada i++, kalau gada bisa infinite loop