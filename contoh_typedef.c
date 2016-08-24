#include <stdio.h>
#include <string.h>

/*
C bahasa pemrograman memberikan kata kunci yang disebut typedef, 
yang dapat Anda gunakan untuk memberikan jenis, nama baru.
*/

typedef struct Profile {
   char nama[25];
} Profil;

void contohTypedef() {
	Profil profil;
	strcpy(profil.nama,"Fajar Rizki");

	printf("Nama : %s",profil.nama);
}