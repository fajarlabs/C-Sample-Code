#include "contoh_struct.h"
#include <string.h>
#include <stdio.h>

struct Buku {
   char  judul[50];
   char  penulis[50];
   char  subjek[100];
   int   id_buku;
};

void contohStruct() {
	struct Buku buku;
	strcpy(buku.judul,"Belajar C");
	strcpy(buku.penulis,"Fajar Rizki");
	strcpy(buku.subjek,"Belajar C Fundamental");
	buku.id_buku = 1;

	printf("Judul %s \n",buku.judul);
	printf("Penulis %s \n",buku.penulis);
	printf("Subjek %s \n",buku.subjek);
	printf("ID Buku %d \n", buku.id_buku);
}
