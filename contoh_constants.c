#include <stdio.h>
#include "contoh_constants.h"

/* define via pre-processor */
#define PANJANG 10

void contohConstants() {
	/* Via keyword */
	const int LEBAR = 5;
	printf("Panjang x Lebar = %d",(PANJANG*LEBAR));
}
