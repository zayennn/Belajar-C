#include <stdio.h>

int main() {
    float nilai = 75;

    printf("nilai ujian : %.1f", nilai);
    printf("apakah lulus ? %s\n", (nilai >= 60) ? "Lulus" : "Tidak Lulus");
}