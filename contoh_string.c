#include <stdio.h>
#include <string.h>

/*
1) strcpy(s1, s2);
Meng-copy s2 kedalam s1

2) strcat(s1, s2);
Concatenate string yang s2 ke akhir string s1.

3) strlen(s1);
Mengembalikan panjang dari s1

4) strcmp(s1, s2);
Mengembalikan 0 jika s1 dan s2 sama; kurang daripada 0 jika s1<s2; lebih besar daripada 0 if s1>s2.

5) strchr(s1, ch);
Mengembalikan pointer ke kejadian pertama ch karakter dalam string s1.

6) strstr(s1, s2);
Mengembalikan pointer ke kejadian pertama string s2 dalam string s1.
*/

void contohString() {
   char str1[12] = "Hello";
   char str2[12] = "World";
   char str3[12];
   int  len ;

   /* copy str1 into str3 */
   strcpy(str3, str1);
   printf("strcpy( str3, str1) :  %s\n", str3 );

   /* concatenates str1 and str2 */
   strcat( str1, str2);
   printf("strcat( str1, str2):   %s\n", str1 );

   /* total lenghth of str1 after concatenation */
   len = strlen(str1);
   printf("strlen(str1) :  %d\n", len );
}