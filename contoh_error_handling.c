#include <stdio.h>
#include <errno.h>
#include <string.h>

void contohErrorHandling() {
	FILE * pf;
    int errnum;
    pf = fopen ("unexist.txt", "rb"); /* contoh filenya tidak ada */
	
    if (pf == NULL) {
    
       errnum = errno;
       fprintf(stderr, "Isi dari errno: %d\n", errno);
       perror("Cetak error oleh perror");
       fprintf(stderr, "Error saat membuka file: %s\n", strerror( errnum ));
    } else 
      fclose (pf);
    
}