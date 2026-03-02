#include <stdio.h>

int main()
{
    int umur = 20;
    float tinggi = 175.5;
    char grade = 'A';

    // ? int = untuk menyimpan bilangan bulat
    // ? float = untuk menyimpan bilangan desimal
    // ? char = untuk menyimpan karakter ( 1 karakter , harus menggunakan tanda petik tunggal '' )

    // ? int → tipe data
    // ? umur → nama variabel
    // ? = → operator penugasan / assignment operator
    // ? 20 → nilai yang akan disimpan dalam variabel umur
    // ? ; → akhir statement
    // * artinya bikin variable dengan tipe data int yang nama nya umur dan isi/value nya adalah 20

    printf("umur kamu : %d\n", umur);
    printf("tinggi kamu : %.1f\n", tinggi);
    printf("grade : %c\n", grade);

    return 0;
}