/*
 * Daniel Goncalves > 1151452@isep.ipp.pt
 * ARQCP - Turma 2DK
 * 
 * main.c
 * 
 */
#include <stdio.h>
#include "asm.h"

#define SIZE 100

char str1[] = "I habe twelbe yellow bases."; // String less than 100 elements.
char *ptr1 = str1;

char str2[SIZE];
char *ptr2 = str2;

/*
 * Module 3 - Exercise 2
 */
int main(void) {

	str_copy_p();
	
	printf("%s ->\n%s\n", str1, str2);
	
	return 0;
}
