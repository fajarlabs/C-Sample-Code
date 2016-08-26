/*
 ============================================================================
 Name        : CBasic.c
 Author      : Fajar Rizki
 Version     : 1.0
 Copyright   : fajarlabs @2016
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
#include "contoh_struct.h"
#include "contoh_while.h"
#include "contoh_for.h"
#include "contoh_extern.h"
#include "contoh_constants.h"
#include "contoh_do_while.h"
#include "contoh_nested_for.h"
#include "contoh_function.h"
#include "contoh_scope_rules.h"
#include "contoh_array.h"
#include "contoh_array2d.h"
#include "contoh_parameter_array.h"
#include "contoh_function_return.h"
#include "contoh_pointer.h"
#include "contoh_union.h"
#include "contoh_bit_fields.h"
#include "contoh_typedef.h"
#include "contoh_getchar_putchar.h"
#include "contoh_scanf.h"
#include "contoh_file_io.h"
#include "contoh_preprocessor.h"
#include "contoh_recursion.h"
#include "contoh_varargs.h"
#include "contoh_memory_management.h"

int x; /* global variabel untuk extern */
int main(void) {
	x = 4; /* test extern */

	/* contohStruct(); */
	/* contohWhile(); */
	/* contohFor(); */
	/* contohExtern(); */
	/* contohConstants(); */
	/* contohDoWhile(); */
	/* contohNestedFor(); */
	/* persegiPanjang(4,5); */
	/* contohAksesScope(); */
	/* contohArray(); */
	/* contohArray2D(); */
	/*
	int data[5] = {1000, 2, 3, 17, 50};
	contohArrParameter1(data);
	*/
	/*
   	int * array = contohFunctionReturn1(10);
   	int counter;
   	printf("Even Numbers\n");
   	for(counter=0; counter<10; counter++){
    	printf("%d\n", array[counter]);
   	}*/
    /* contohPointer(); */
    /* contohUnion(); */
    /* contohBitFields(); */
    /* contohTypedef(); */
    /* contohGetcharPutchar(); */
    /* contohScanf(); */
    /* contohFileIO(); */
    /* contohPreprocessor(); */
    /* contohErrorHandling(); */
    /* contohRecursion(); */
    /* contohVarargs(); */
    	contohResizeRelease();
    	contohMalloc();

	return EXIT_SUCCESS;
}
