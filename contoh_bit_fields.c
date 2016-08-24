#include <stdio.h>

/*
Variabel didefinisikan dengan lebar yang telah ditetapkan 
disebut bidang bit. Bidang bit dapat menyimpan lebih dari 
satu bit; misalnya, jika Anda perlu variabel untuk menyimpan 
nilai dari 0 sampai 7, maka Anda dapat menentukan bidang 
sedikit dengan lebar 3 bit sebagai berikut -
*/
struct {
   unsigned int age : 3; /* bit */
} Age;

void contohBitFields() {
   Age.age = 4; /* 1x */
   printf( "Sizeof( Age ) : %d\n", sizeof(Age) );
   printf( "Age.age : %d\n", Age.age );

   Age.age = 7; /* 2x */
   printf( "Age.age : %d\n", Age.age );

   Age.age = 8; /* 3x */
   printf( "Age.age : %d\n", Age.age ); 
}