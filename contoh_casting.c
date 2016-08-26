#include <stdio.h>

void contohCasting() {

    int a = 17, b = 5;
    double c;
    c = (double) a / b; /* Contoh casting */

	int  i = 17;
    char c = 'c'; /* nilai ascii adalah 99 */
    float sum;

    sum = i + c;
    printf("Jumlah nilai : %f\n", sum );
}