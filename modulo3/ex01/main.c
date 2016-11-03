/*
 * Tiago Correia - 1151031@isep.ipp.pt
 * ARQCP - Turma 2DK
 * 
 * main.c
 * 
 */
  
#include <stdio.h>
#include "asm.h"
	
char str[] = "Instituto Superior de Engenharia do Porto";
char *ptr1 = str;

/*
 * Module 3 - Exercise 1
 */

int main(void) {
	
	int result = space_count();
	printf("The number of spaces is: %d\n", result);

	return 0;
}
