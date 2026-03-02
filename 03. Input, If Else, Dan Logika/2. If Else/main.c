#include <stdio.h>

int main() {
    int nilai;
    printf("masukan nilai ujian : ");
    scanf("%d", &nilai);

    if ( nilai >= 75 ) {
        printf("lulus");
    } else {
        printf("tidak lulus");
    }

    return 0;
}