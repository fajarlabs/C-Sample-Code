#include <stdio.h>

void contohFibonacci() {
	printf("Contoh Fibonacci\n");
	int i; 
	int end = 11;

	for(i = 0; i < end; i++) {
		printf("%d\n", Fibonacci(i));
	}
}

int Fibonacci(int n) {
   if ( n == 0 )
      return 0;
   else if ( n == 1 )
      return 1;
   else
      return ( Fibonacci(n-1) + Fibonacci(n-2) );
} 