#include <stdio.h>

/* Tanpa return dan parameter */
void contohFungsi() {
	printf("Contoh fungsi!");
}

/* Dengan return dan parameter */
int persegiPanjang(int p, int l) {
	int n = p * l;
	printf("Persegi panjang P x L = %d",n);
	return n;
}
