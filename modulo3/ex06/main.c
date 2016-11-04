/*
 * Daniel Goncalves > 1151452@isep.ipp.pt
 * ARQCP - Turma 2DK
 * 
 * main.c
 * 
 */
#include <stdio.h>
#include "asm.h"

char str[] = "Instituto Superior da Maia";
char *ptr1 = str;

/*
 * Module 3 - Exercise 6
 */
int main(void) {

	printf("original: %s", str);
	
	int num = encrypt();
	
	printf("\nencrypted: %s\nnumber of changed characters: %d\n", str, num);
	
	return 0;
}
