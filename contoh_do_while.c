#include <stdio.h>

void contohDoWhile() {
	/* Definisi variabel lokal */
	int a = 10;

	/* Lakukan eksekusi pertama,
	minimal eksekusinya adalah 1x */
	do {
		printf("nilai a : %d\n", a);
		a = a + 1;
	} while (a < 20);
}
