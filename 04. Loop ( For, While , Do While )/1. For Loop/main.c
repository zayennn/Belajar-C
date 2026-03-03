// * struktur dasar foor loop :
/*
    ? for (inisialisasi; kondisi; increament) {
    ?   eksekusi code;
    ? }
*/

#include <stdio.h>

int main() {
    for (int i = 0; i < 5; i++) {
        printf("hello world ke-%d\n", i);
    }

    return 0;
}

// * int i = 0; → mulai dari 0
// * i < 0; → selama kondisi nya true maka lanjut terus, kalau kondisi nya !true maka loop berhenti
// * i++ → setiap code selesai dijalanin, i bertambah 1