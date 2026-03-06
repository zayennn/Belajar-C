#include <stdio.h>

int main() {
    int n[5];
    int total = 0;
    int rata_rata = 0;

    for ( int i = 0; i < 5; i++ ) {
        printf("nilai ke - %d : ", i + 1);
        scanf("%d", &n[i]);
    }

    for ( int i = 0; i < n[i]; i++ ) {
        total += n[i];
        rata_rata = total / i;
    }

    printf("%d", total);
    printf("%d", rata_rata);

    return 0;
}