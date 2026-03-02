#include <stdio.h>

int main() {
    int umur = 19;

    printf("umur kamu : %d\n", umur); // ? %d = format specifier untuk menampilkan nilai integer
    printf("umur kamu : %i\n", umur); // ? %i = format specifier untuk menampilkan nilai integer ( sama dengan %d )
    printf("umur kamu : %u\n", umur); // ? %u = format specifier untuk menampilkan nilai unsigned integer ( hanya untuk bilangan positif )
    printf("umur kamu : %o\n", umur); // ? %o = format specifier untuk menampilkan nilai octal ( basis 8 )
    printf("umur kamu : %x\n", umur); // ? %x = format specifier untuk menampilkan nilai hexadecimal ( basis 16 ) dengan huruf kecil
    printf("umur kamu : %X\n", umur); // ? %X = format specifier untuk menampilkan nilai hexadecimal ( basis 16 ) dengan huruf besar

    return 0;
}