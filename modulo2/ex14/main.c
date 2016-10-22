/*
 * Daniel Goncalves > 1151452@isep.ipp.pt
 * ARQCP - Turma 2DK
 * 
 * main.c
 * 
 */
#include <stdio.h>
#include "asm.h"

int num = 0;

/*
 * Module 2 - Exercise 14
 */
int main(void) {
	
	num = 3;
	int eight = magic_eight();
	printf("\nMagic 8: num = %d => %d\n", num, eight);
	
	num = 456789;
	eight = magic_eight();
	printf("\nMagic 8: num = %d => %d\n", num, eight);
	
	num = -10;
	eight = magic_eight();
	printf("\nMagic 8: num = %d => %d\n", num, eight);
	
	num = -4;
	eight = magic_eight();
	printf("\nMagic 8: num = %d => %d\n", num, eight);
		
	num = -1;
	eight = magic_eight();
	printf("\nMagic 8: num = %d => %d\n\n", num, eight);
	
	return 0;
}
