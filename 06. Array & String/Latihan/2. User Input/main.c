#include <stdio.h>

int main() {
    int n[5];
    int total = 0;
    int rata_rata;

    int jum_data = sizeof(n) / sizeof(n[0]);

    for ( int i = 0; i < jum_data; i++ ) {
        printf("nilai ke - %d : ", i + 1);
        scanf("%d", &n[i]);
    }

    for ( int i = 0; i < jum_data; i++ ) {
        total += n[i];
    }
    
    rata_rata = total / jum_data;

    printf("%d\n", total);
    printf("%d\n", rata_rata);

    return 0;
}