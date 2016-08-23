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

int x;
int main(void) {
	x = 4;
	/* contohStruct(); */
	/* contohWhile(); */
	/* contohFor(); */
	/* contohExtern(); */
	/* contohConstants(); */
	contohDoWhile();
	return EXIT_SUCCESS;
}
