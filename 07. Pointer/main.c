/*
    apa itu pointer ?

    komputer menyimpan data di memory (RAM)
    bayangkan RAM itu seperti deretan rumah, contoh :
    Alamat      Isi
    1000        10
    1004        20
    1008        30

    variable bisa :
    ? int a = 10;

    * artinya :
    alamat 1000 → nilai 10

    sekarang muncul pertanyaan gimana kalo pengen tau alamat dari variable itu ?
    * jawabannya = pointer
    pointer adalah variable yang menyimpan alamat memori
*/

#include <stdio.h>

int main() {
    int x = 10;

    printf("%d", x);

    return 0;
}