#include <stdio.h>

void contohArray() {
   int n[ 10 ]; /* n adalah array dari 10 integer */
   int i,j;
 
   /* inisialisasi elemen dari 0 */         
   for ( i = 0; i < 10; i++ ) {
      n[ i ] = i + 100; /* set element at location i to i + 100 */
   }

   /* Cara menghitung jumlah array */
   int total = sizeof(n)/sizeof(n[0]);
   printf("Jumlah elemen adalah : %d \n", total);
   
   /* cacah array elemen */
   for (j = 0; j < 10; j++ ) {
      printf("Element[%d] = %d\n", j, n[j] );
   }
}