/*
 * Daniel Goncalves > 1151452@isep.ipp.pt
 * ARQCP - Turma 2DK
 * 
 * main.c
 * 
 */
  
#include <stdio.h>
#include "activate_bit.h"
#include "activate_2bits.h"

/*
 * Module 4 - Exercise 12c
 */
int main(void) {
	
	// 1
	int num = 0;
	int *ptr = &num;
	int pos = 0;
	
	printf("\nactivate bit at index %d of number %d, changes number to -> ", pos, num);
	activate_2bits(ptr, pos);
	printf("%d :\t 0x%08x\n", num, num);
	
	// 2
	num = 1;
	pos = 0;
	
	printf("\nactivate bit at index %d of number %d, changes number to -> ", pos, num);
	activate_2bits(ptr, pos);
	printf("%d :\t 0x%08x\n", num, num);
	
	// 3
	num = 1;
	pos = 1;
	
	printf("\nactivate bit at index %d of number %d, changes number to -> ", pos, num);
	activate_2bits(ptr, pos);
	printf("%d :\t 0x%08x\n", num, num);
	
	// 4
	num = 2;
	pos = 4;
	
	printf("\nactivate bit at index %d of number %d, changes number to -> ", pos, num);
	activate_2bits(ptr, pos);
	printf("%d :\t 0x%08x\n", num, num);
	
	// 5
	num = 32;
	pos = 5;
	
	printf("\nactivate bit at index %d of number %d, changes number to -> ", pos, num);
	activate_2bits(ptr, pos);
	printf("%d :\t 0x%08x\n", num, num);
	
	return 0;
}
