#include <stdio.h>

int hitungTotal(int n) {
    int total = 0;

    for ( int i = 0; i < n; i++ ) {
        total += i;
    }

    return total;
}

int main() {
    int n;

    printf("hitung total angka n : ");
    scanf("%d", n);

    int hasil = hitungTotal(n);
    printf("%d", hasil);

    return 0;
}