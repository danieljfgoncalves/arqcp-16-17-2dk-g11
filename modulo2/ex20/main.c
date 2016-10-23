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
 * Module 2 - Exercise 20
 */
int main(void) {
	
	printf("1 - even/positive\n2 - even/negative\n3 - odd/positive\n4 - odd/negative\n\n");
	
	num = -3;
	printf("%d = %d\n", num, check_number());
	
	num = 1;
	printf("%d = %d\n", num, check_number());
	
	num = 6;
	printf("%d = %d\n", num, check_number());
	
	num = -2;
	printf("%d = %d\n", num, check_number());
	
	num = 1000;
	printf("%d = %d\n", num, check_number());
	
	num = -2001;
	printf("%d = %d\n", num, check_number());
	
	num = -7;
	printf("%d = %d\n", num, check_number());
	
	num = -5672;
	printf("%d = %d\n", num, check_number());
	
	return 0;
}
