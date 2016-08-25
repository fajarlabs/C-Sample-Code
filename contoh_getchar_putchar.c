#include <stdio.h>

void contohGetcharPutchar() {
   int c;

   printf( "Masukkan nilai :");
   /* Fungsi membaca karakter berikutnya yang tersedia dari layar dan 
    mengembalikan sebagai integer. Fungsi ini hanya membaca satu 
    karakter pada satu waktu. Anda dapat menggunakan metode ini 
    dalam lingkaran dalam kasus Anda ingin membaca 
    lebih dari satu karakter dari layar */
   c = getchar( );

   printf( "\nYang kamu masukkan : ");
   /* Fungsi menempatkan karakter diteruskan layar dan mengembalikan
    karakter yang sama. Fungsi ini menempatkan hanya satu karakter 
    pada satu waktu. Anda dapat menggunakan metode ini dalam lingkaran 
    dalam kasus Anda ingin menampilkan lebih dari satu karakter di layar */
   putchar( c );
}