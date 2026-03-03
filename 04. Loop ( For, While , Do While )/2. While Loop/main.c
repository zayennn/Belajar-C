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