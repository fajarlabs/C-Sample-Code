#include <stdio.h>

/*
MODE    |    DESCRIPTION 
--------------------------------------------------------------------------------------------------
r            Membuka file teks yang ada untuk tujuan membaca.
w            Membuka sebuah file teks untuk menulis. Jika tidak ada, maka file yang baru dibuat.
a            Membuka sebuah file teks untuk menulis dalam modus menambahkan. Jika tidak ada, maka file yang baru dibuat.
r+           Membuka sebuah file teks untuk membaca dan menulis.
w+           Membuka sebuah file teks untuk membaca dan menulis. Ini pertama memotong file ke nol panjang jika ada, jika tidak menciptakan file jika itu tidak ada.
a+           Membuka sebuah file teks untuk membaca dan menulis. Ini menciptakan file jika tidak ada. membaca akan mulai dari awal tetapi menulis hanya dapat ditambahkan.
*/

void contohFileIO() {
   FILE *fp;

   fp = fopen("test.txt", "w+");
   fprintf(fp, "This is testing for fprintf...\n");
   fputs("This is testing for fputs...\n", fp);
   fclose(fp);
}