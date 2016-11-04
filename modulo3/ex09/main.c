/*
 * Tiago Correia - 1151031@isep.ipp.pt
 * ARQCP - Turma 2DK
 * 
 * main.c
 * 
 */
  
#include <stdio.h>
#include "asm.h"

int num = 5;
short vec[] = {5, 20, 420, 62, 45};
short *ptrvec = vec;
short x = 62;

/*
 * Module 3 - Exercise 9
 */

int main(void) {
	
	short* result = vec_search();
	
	if(result == 0){
		printf("%d was not found!\n", x);
	} else {
		printf("%d found at address %p\n", x, result);
	}
	
	return 0;
}
