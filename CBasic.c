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
	contohAksesScope();

	return EXIT_SUCCESS;
}
