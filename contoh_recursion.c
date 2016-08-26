#include <stdio.h>

int factorial(unsigned int i) {
   if(i <= 1)
      return 1;
   
   return i * factorial(i - 1);
}

int fibonaci(int i) {
   if(i == 0)
      return 0;
	
   if(i == 1)
      return 1;
  
   return fibonaci(i-1) + fibonaci(i-2);
}

void contohRecursion() {
	printf("FACTORIAL ======================= \n");
    int i = 15;
    printf("Factorial of %d is %d\n", i, factorial(i));
    printf("======================= \n");
    printf("FIBONACI ======================= \n");
    int j;
    for (j = 0; j < 10; j++)
        printf("%d\t", fibonaci(j));

}