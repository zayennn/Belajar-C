#include <stdio.h> // ? ini namanya preprocessor directive, tandanya # di depan
// * artinya: sebelum program di-compile, lakukan sesuatu dulu

// ? stdio.h adalah library bawaan c
/* isinya fungsi :
* • printf
* • scanf
* • dll 
todo tanpa ini ( stdio.h ) bakalan error karena compiler gatau itu apa
*/


int main() { // ? ini adalah fungsi utama, artinya program akan mulai dari sini
    // ? main pintu masuk utama program
    // ? int adalah tipe data, artinya variabel ini akan ngembalikan angka (integer)
    // ? kenapa harus int ? karena sistem operasi nunggu angka balikan dari program , biasa nya :
    // * 0 artinya sukses, selain itu artinya error

    // ? {} adalah blok kode, artinya semua yang ada di dalamnya akan dieksekusi

    printf("Hello, World!\n"); // ? di c wajib pake titik koma (;) di akhir setiap statement, tandanya perintah selesai
    return 0;
}