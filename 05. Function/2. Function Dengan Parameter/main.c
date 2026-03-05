#include <stdio.h>

void sapa(char nama[]) {
    printf("halo %c", nama);
}

int main() {
    sapa("fulan");
    sapa("fulana");

    return 0;
}

// * nama[] adalah parameter
// * kenapa harus ada "[]" ? karena sebenarnya string di c adalah sebuah kumpulan string, contoh :
// * fulan = f u l a n \0
// * \0 adalah null terminator (penanda akhir string)

// * bentuk asli :
// ? char nama[] = "fulana";
// * artinya :
/*
    nama[0] = 'f'
    nama[1] = 'u'
    nama[2] = 'l'
    nama[3] = 'a'
    nama[4] = 'n'
    nama[5] = 'a'
    nama[6] = '\0'
*/