#include <stdio.h>

int main() {
    int nilai;

    print("masukan nilai ujian : ");
    scanf("%d", &nilai);

    if ( nilai >= 60 ) {
        print("lulus");
    } else {
        print("tidak lulus");
    }

    return 0;
}