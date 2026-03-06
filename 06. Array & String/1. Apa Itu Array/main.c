// * array adalah kumpulan data dalam 1 variable, contoh :
// ? int nilai[5];
/*
    * artinya :
    nilai[0]
    nilai[1]
    nilai[2]
    nilai[3]
    nilai[4]

    ! index selalu dimulai dari 0
*/

// * contoh program :

#include <stdio.h>

int main() {
    int angka[5] = {10, 20, 30, 40, 50};

    printf("%d", angka[2]);
    printf("%d", angka[4]);

    return 0;
}