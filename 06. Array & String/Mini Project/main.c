#include <stdio.h>

int main() {
    char nama[2][50];
    int nilai[2];

    for ( int i = 0; i < 2; i++ ) {
        printf("masukan nama mahasiswa ke - %d : ", i + 1);
        scanf("%s", &nama);
        printf("masukan nilai mahasiswa ke - %d : ", i + 1);
        scanf("%d", &nilai);
    }

    printf("\n");

    for ( int i = 0; i < 2; i++ ) {
        printf("nama mahasiswa ke %d : %s\n", (i + 1), nama[i]);
        printf("nilai nya : %d\n", nilai[i]);
        printf("\n");
    }

    return 0;
}