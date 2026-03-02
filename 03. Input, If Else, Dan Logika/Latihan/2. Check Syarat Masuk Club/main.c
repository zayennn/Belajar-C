#include <stdio.h>

int main() {
    int umur;
    float tinggi;

    printf("masukan umur anda : ");
    scanf("%d", &umur);
    printf("masukan tinggi anda : ");
    scanf("%f", tinggi);

    if ( umur >= 18 && tinggi >= 160 ) {
        printf("memenuhi syarat");
    } else {
        printf("tidak memenuhi syarat");
    }

    return 0;
}