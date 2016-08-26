#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/*
FUNCTION                                |       DESCRIPTION 
----------------------------------------------------------------------------------
void *calloc(int num, int size);                Fungsi ini mengalokasikan array elemen enum yang masing-masing ukuran dalam bytes akan ukuran.
void free(void *address);                       Fungsi ini melepaskan blok blok memori yang ditentukan oleh alamat.
void *malloc(int num);                          Fungsi ini mengalokasikan array byte num dan meninggalkan mereka diinisialisasi.
void *realloc(void *address, int newsize);      Ini memori fungsi mengalokasikan ulang dan memperluas ukuran memori baru.
*/

/* Fungsi contoh untuk alokasi memori */
void contohMalloc() {
   char name[100];
   char *description; /* Di inisialisasi sebagai pointer yang menunjuk ke tipedata char */

   strcpy(name, "Agus");

   /* alokasi memori dinamis */
   description = malloc( 200 * sizeof(char) );
   /* Jika menggunakan calloc, tinggal diganti saja seperti dibawah ini */
   /* calloc(200, sizeof(char)); */
	
   if( description == NULL )
      fprintf(stderr, "Error - unable to allocate required memory\n");
   else
      strcpy( description, "Agus jualan gethuk");
   
   printf("Nama = %s\n", name );
   printf("Keterangan : %s\n", description );
}

/* Fungsi contoh ketika merubah ukuran memori dan 
melepaskan memrori yang telah dipakai */
void contohResizeRelease() {

   char name[100];
   char *description;

   strcpy(name, "Agus");

   /* alokasi memori secara dinamis */
   description = malloc( 30 * sizeof(char) );
	
   if( description == NULL )
      fprintf(stderr, "Error - unable to allocate required memory\n");
   else
      strcpy( description, "Agus jualan gethuk.");
	
   /* misalkan Anda ingin menyimpan keterangan lebih besar, nambah ukuran memori */
   description = realloc( description, 100 * sizeof(char) );
	
   if( description == NULL )
      fprintf(stderr, "Error - unable to allocate required memory\n");
   else
      strcat( description, "Dia sedang berdagang keliling");
   
   printf("Nama = %s\n", name );
   printf("Keterangan : %s\n", description );

   /* me-release memory menggunakan fungsi free() */
   free(description);
}