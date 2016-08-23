#include "contoh_struct.h"
#include <string.h>
#include <stdio.h>

struct Books {
   char  title[50];
   char  author[50];
   char  subject[100];
   int   book_id;
};

void contohStruct() {
	struct Books book;
	strcpy(book.title,"Belajar C");
	strcpy(book.author,"Fajar Rizki");
	strcpy(book.subject,"Belajar C Fundamental");
	book.book_id = 1;

	printf("Title %s \n",book.title);
	printf("Author %s \n",book.author);
	printf("Subject %s \n",book.subject);
	printf("Book ID %d \n", book.book_id);
}
