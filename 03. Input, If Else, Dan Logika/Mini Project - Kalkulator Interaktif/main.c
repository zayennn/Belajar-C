#include <stdio.h>

int main() {
    int x, y;
    char operator;

    printf("input angka pertama : ");
    scanf("%d", &x);

    printf("input angka kedua : ");
    scanf("%d", &y);

    printf("pilih operator apa yang ingin anda gunakan (+, -, *, /) : ");
    scanf("%c", &operator);

    if ( operator == "+" ) {
        printf("hasil dari %d %c %d adalah : &d", x, operator, y, (x + y));
    } else if ( operator == "-" ) {
        printf("hasil dari %d %c %d adalah : &d", x, operator, y, (x - y));
    } else if ( operator == "*" ) {
        printf("hasil dari %d %c %d adalah : &d", x, operator, y, (x * y));
    } else if ( operator == "/" ) {
        printf("hasil dari %d %c %d adalah : &d", x, operator, y, (x / y));
    } else {
        printf("operator tidak valid!");
    }

    return 0;
}