#include <stdio.h>

int * contohFunctionReturn1(int N) {
    /* Declaration of a static local integer array */
    static int evenNumberArray[100];
    int i, even = 2;
     
    for(i=0; i<N; i++){
        evenNumberArray[i] = even;
        even += 2;
    }
    /* Returning base address of evenNumberArray array*/
    return evenNumberArray;
}

int contohFunctionReturn2() {
	return 5;
}