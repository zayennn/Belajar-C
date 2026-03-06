#include <stdio.h>
#include <stdlib.h>

void tampilkanIntro() {
    printf("masukan tebakan mu (1-10) : ");
}

int generateAngka() {
    int com = rand() % 10 + 1;
    return com;
}

char jalankanGame() {
    int tebakan_user;

    tampilkanIntro();
    scanf("%d", &tebakan_user);

    int kesempatan_user = 5;

    while (5 > 0) {
        if (tebakan_user != generateAngka()) {
            if (tebakan_user > generateAngka()) {
                printf("tebakan mu salah, angka mu terlalu besar...\n");
                printf("sisa kesempatan mu : %d\n", kesempatan_user);
                printf("tebak angka 1-10 : ");
                scanf("%d", &tebakan_user);
                kesempatan_user--;
            } else if (tebakan_user < generateAngka()) {
                printf("tebakan mu salah, angka mu terlalu kecil...\n");
                printf("sisa kesempatan mu : %d\n", kesempatan_user);
                printf("tebak angka 1-10 : ");
                scanf("%d", &tebakan_user);
                kesempatan_user--;
            } 
        } else {
            printf("tebakan mu benar");
            break;
        }
    }
}

int main() {
    char hasil = jalankanGame();

    return 0;
}