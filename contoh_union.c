#include <stdio.h>
#include <string.h>

/* 
Union adalah tipe data khusus yang tersedia di C yang 
memungkinkan untuk menyimpan berbagai jenis data di lokasi memori yang sama. 
Anda dapat menentukan union dengan banyak anggota, 
tetapi hanya satu anggota dapat berisi nilai pada waktu tertentu / dalam waktu yang sama. 
Union menyediakan cara yang efisien untuk menggunakan lokasi memori yang sama untuk beberapa tujuan.
*/

/* Buat union */
union Data {
   int i;
   float f;
   char str[20];
};


void contohUnion() {
   union Data data;        

   data.i = 10;
   data.f = 220.5;
   printf( "data.i : %d\n", data.i); /* salah */
   printf( "data.f : %f\n", data.f);
   
   data.f = 220.5;
   printf( "data.f : %f\n", data.f);
   
   strcpy( data.str, "C Programming");
   printf( "data.str : %s\n", data.str);
}