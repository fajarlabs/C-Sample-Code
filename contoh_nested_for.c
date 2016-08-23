#include <stdio.h>

void contohNestedFor() {
	/* definisi variabel lokal */
	int i, j;

	for (i = 2; i < 100; i++) {

		for (j = 2; j <= (i / j); j++)
			if (!(i % j))
				break; // jika faktor ada bukan prima
		if (j > (i / j))
			printf("%d prima \n", i);
	}
}
