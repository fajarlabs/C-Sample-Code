#include <stdio.h>


/* Tidak bisa menghitung jumlah isi didalam
array, yang bisa dihitung adalah array dari 
variabel yang aslinya */
void contohArrParameter1(int* arg) {

	/* Salah, length hanya 1 */
	int total = sizeof(arg)/sizeof(arg[0]);
	printf("Total %d\n", total);

	/* Untuk melihat isi pointer cacah dengan menambahkan 1
	seperti *(arg+index) */
	int i;
	int length = 5; /* manual */
	for ( i = 0; i < length; i++ ) {
		printf("*(p + %d) : %d\n",  i, *(arg + i) );
	}
}

void contohArrParameter2(int arg[10]) {

	/* Salah, length hanya 1 */
	int total = sizeof(arg)/sizeof(arg[0]);
	printf("Total %d", total);
}

void contohArrParameter3(int arg[]) {

	/* Salah, length hanya 1 */
	int total = sizeof(arg)/sizeof(int);
	printf("Total %d", total);
}