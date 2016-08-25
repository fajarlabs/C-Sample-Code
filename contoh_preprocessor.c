#include <stdio.h>
#include <string.h>

/*
DIRECTIVE   |   DESCRIPTION
------------------------------------------------------------------------------
#define         Pengganti makro preprocessor.
#include        Menyisipkan header tertentu dari file lain.
#undef          Jika preprocessor makro belum didefinisikan.
#ifdef          Mengembalikan true jika makro ini didefinisikan.
#ifndef         Mengembalikan true jika makro ini tidak didefinisikan.
#if             Tes jika kondisi waktu kompilasi benar.
#else           Alternatif untuk # jika.
#elif           #else dan # jika dalam satu pernyataan.
#endif          Berakhir preprocessor bersyarat.
#error          Cetakan kesalahan pesan di stderr.
#pragma         Isu perintah khusus untuk compiler, menggunakan metode standar.
*/

/*
PREDEFINED MACROS
MACRO        |   DESCRIPTION
__DATE__         Tanggal sekarang sebagai karakter literal dalam "MM DD YYYY" format.
__TIME__         Waktu saat ini sebagai karakter literal dalam "HH: MM: SS" format.
__FILE__         Ini berisi nama file saat ini sebagai string literal.
__LINE__         Ini berisi nomor baris saat sebagai konstan desimal.
__STDC__         Didefinisikan sebagai 1 ketika compiler mengkompilasi dengan standar ANSI.

*/

/* Example */
#undef  FILE_SIZE
#define FILE_SIZE 42

#ifndef MESSAGE
   #define MESSAGE "HELLO WORLD \n"
#endif

#ifdef DEBUG
	#define DEBUG "DEVELOPMENT \n"
#else
	#define DEBUG "PRODUCTION \n"
#endif

/* Simbol \ ini adalah Macro Continuation Operator 
 untuk kode yang lebih dari 1 garis */
#define  message_for(a, b)  \
   printf(#a " and " #b ": We love you!\n") 

/* Token pasting operator 
Operator token-paste (##) dalam definisi makro menggabungkan 
dua argumen. Ini memungkinkan dua token terpisah dalam 
definisi makro yang akan bergabung ke tanda tunggal.
*/
#define tokenpaster(n) printf ("token" #n " = %d \n", token##n)

/* Constant expression */
#if !defined (MESSAGE_TWO)
   #define MESSAGE_TWO "You wish!"
#endif

/* Parameterized Macros */
#define square(x) ((x) * (x))
#define MAX(x,y) ((x) > (y) ? (x) : (y))

void contohPreprocessor() {
	printf("DEBUG : %s", DEBUG);
	printf("MESSAGE : %s",MESSAGE);
	message_for("Pemrograman", "C");
	printf("MESSAGE TWO %s \n", MESSAGE_TWO);
	printf("Max between 20 and 10 is %d \n", MAX(10, 20));  
	printf("Square 20 is %d \n", square(20));
	int token34 = 40;
	tokenpaster(34);
	printf("FILE SIZE : %d \n", FILE_SIZE);
    printf("File :%s\n", __FILE__ );
    printf("Date :%s\n", __DATE__ );
    printf("Time :%s\n", __TIME__ );
    printf("Line :%d\n", __LINE__ );
    printf("ANSI :%d\n", __STDC__ );
}