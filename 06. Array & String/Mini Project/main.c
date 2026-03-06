#include <stdio.h>

int main() {
    char nama[2][50];
    int nilai[2];

    int rata_rata;
    int total = 0;
    int max = 0;

    int length = sizeof(nama) / sizeof(nama[0]);

    for ( int i = 0; i < length; i++ ) {
        printf("masukan nama mahasiswa ke - %d : ", i + 1);
        scanf("%s", &nama[i]);
        printf("masukan nilai mahasiswa ke - %d : ", i + 1);
        scanf("%d", &nilai[i]);
    }

    printf("\n");

    for ( int i = 0; i < length; i++ ) {
        total += nilai[i];

        if (max < nilai[i]) {
            max = nilai[i];
        }

        printf("nama mahasiswa ke %d : %s\n", (i + 1), nama[i]);
        printf("nilai nya : %d\n", nilai[i]);
        printf("\n");
    }

    rata_rata = total / length;

    printf("rata rata nilai kelas adalah : %d\n", rata_rata);
    printf("nilai tertinggi adalah : %d\n", max);

    return 0;
}