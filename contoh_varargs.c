#include <stdio.h>
#include <stdarg.h> /* include-kan library stdarg.h */

double average(int count,...) { /* count -> jumlah argumentnya */

   va_list valist;
   double sum = 0.0;
   int i;

   /* initialize valist for count number of arguments */
   va_start(valist, count);

   /* access all the arguments assigned to valist */
   for (i = 0; i < count; i++)
      sum += va_arg(valist, int);
	
   /* clean memory reserved for valist */
   va_end(valist);

   return sum/count;
}

int contohVarargs() {
   printf("Average of 2, 3, 4, 5 = %f\n", average(4, 2,3,4,5));
   printf("Average of 5, 10, 15 = %f\n", average(3, 5,10,15));
}