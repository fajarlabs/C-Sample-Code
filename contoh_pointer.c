#include <stdio.h>

void contohPointer() {
   int  var = 20;   /* deklarasi variabel */
   int  *ip;        /* deklarasi variabel pointer */

   ip = &var;  /* menyimpan alamat kedalam var variabel pointer*/

   printf("Alamat dari variabel var : %x\n", &var  );

   /* alamat disimpan dalam pointer variabel */
   printf("Alamat disimpan dalam variabel ip: %x\n", ip );

   /* mengakses nilai menggunakan pointer */
   printf("Nilai dari variabel *ip : %d\n", *ip );
}