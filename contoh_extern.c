#include <stdio.h>

/* variabel x menunjuk dari variabel x yang
telah dideklarasikan ditempat file lain */
extern int x;

void contohExtern() {
	printf("Cetak %d",x);
}
