#include <stdio.h>

int dataA = 5; /* global */

void contohScopeRules() {
	int dataB = 3,dataC = 7; /*	lokal */
}

void contohAksesScope() {
	printf("Cetak global variabel %d",dataA);
	/* printf("Cetak lokal variabel %d",dataB); error */
}
