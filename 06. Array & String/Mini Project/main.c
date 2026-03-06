#include <stdio.h>

int main() {
    char nama[3][50];
    int nilai[3];

    for ( int i = 0; i < 3; i++ ) {
        printf("masukan nama mahasiswa ke - %d : ", i + 1);
        scanf("%s", &nama);
        printf("masukan nilai mahasiswa ke - %d : ", i + 1);
        scanf("%d", &nilai);
    }

    for ( int i = 0; i < 3; i++ ) {
        printf("nama mahasiswa ke %d : %s\n", (i + 1), nama[i]);
        printf("nilai nya : %d\n", nilai[i]);
        printf("\n");
    }

    return 0;
}