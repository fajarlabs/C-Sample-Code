#include <stdio.h>
/*
scanf (const char * Format, ...) fungsi membaca masukan 
dari standar stdin input stream dan memindai masukan yang sesuai 
dengan format yang disediakan.
*/
void contohScanf() {
   char str[100];
   int i;

   printf( "Masukkan nilai :");
   scanf("%s %d", str, &i);/* 2x input/parameter dengan batas spasi */

   printf( "\nYang kamu masukkan: %s %d ", str, i);
}