// * struktur dasar do while :
/*
    ? do {
    ?    eksekusi code;
    ? } while (kondisi);
*/

#include <stdio.h>

int main() {
    int i = 0;

    do {
        i++;
        printf("hello world ke - %d \n", i);
    } while (i < 5);
}