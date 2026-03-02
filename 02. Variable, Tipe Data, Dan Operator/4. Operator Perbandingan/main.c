#include <stdio.h>

int main() {
    int a = 10;
    int b = 5;

    printf("a > b : %d\n", a > b); // true (1)
    printf("a < b : %d\n", a < b); // false (0)
    printf("a >= b : %d\n", a >= b); // true (1)
    printf("a <= b : %d\n", a <= b); // false (0)
    printf("a == b : %d\n", a == b); // false (0)
    printf("a != b : %d\n", a != b); // true (1)

    // ? output nya 1 dan 0 
    // * kenapa ? karena di c 1 itu true dan 0 itu false

    /*
        * Penjelasan Operator Perbandingan:
        * > → operator lebih besar dari
        * < → operator lebih kecil dari
        * >= → operator lebih besar atau sama dengan
        * <= → operator lebih kecil atau sama dengan
        * == → operator sama dengan
    */
}