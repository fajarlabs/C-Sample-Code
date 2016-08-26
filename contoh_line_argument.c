#include <stdio.h>

/*
Contoh dibawah ini jika menggunakan command-line
Buka Command Prompt, lalu eksekusi agar menjadi file app.exe

OPEN CMD
---------------------------------------
> gcc contoh_line_argument.c -o app.exe

Setelah selesai lalu gunakan app.exe-nya tersebut

OPEN CMD
---------------------------------------
> app "halo dunia"


*/
int main( int argc, char *argv[] )  {

   if( argc == 2 )
      printf("Argument yang disediakan %s\n", argv[1]);
   else if( argc > 2 )
      printf("Terlalu banyak argument yang dimasukkan.\n");
   else
      printf("Hanya 1 argument.\n");
}