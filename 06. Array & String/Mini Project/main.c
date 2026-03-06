#include <stdio.h>

int main() {

    int jumlah_mahasiswa[3];
    char *nama;
    int nilai;

    for ( int i = 0; i < 3; i++ ) {
        printf("masukan nama mahasiswa ke - %d : ", i + 1);
        scanf("%s", nama);
        printf("masukan nilai mahasiswa ke - %d : ", i + 1);
        scanf("%d", nilai);
    }

    

    return 0;
}