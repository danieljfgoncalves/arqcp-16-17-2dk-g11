/*
 * Daniel Goncalves > 1151452@isep.ipp.pt
 * ARQCP - Turma 2DK
 * 
 * main.c
 * 
 */
  
#include <stdio.h>
#include "activate_bit.h"

/*
 * Module 4 - Exercise 12a
 */
int main(void) {
	
	// 1
	int num = 0;
	int *ptr = &num;
	int pos = 0;
	
	printf("\nactivate bit at index %d of number %d, changes number to -> ", pos, num);
	int bool = activate_bit(ptr, pos);
	printf("%d and the bit was %saltered (bool=%d).\n", num, (bool) ? "" : "not ", bool);
	
	// 2
	num = 1;
	pos = 0;
	
	printf("\nactivate bit at index %d of number %d, changes number to -> ", pos, num);
	bool = activate_bit(ptr, pos);
	printf("%d and the bit was %saltered (bool=%d).\n", num, (bool) ? "" : "not ", bool);
	
	// 3
	num = 1;
	pos = 1;
	
	printf("\nactivate bit at index %d of number %d, changes number to -> ", pos, num);
	bool = activate_bit(ptr, pos);
	printf("%d and the bit was %saltered (bool=%d).\n", num, (bool) ? "" : "not ", bool);
	
	// 4
	num = 2;
	pos = 4;
	
	printf("\nactivate bit at index %d of number %d, changes number to -> ", pos, num);
	bool = activate_bit(ptr, pos);
	printf("%d and the bit was %saltered (bool=%d).\n", num, (bool) ? "" : "not ", bool);
	
	// 5
	num = 32;
	pos = 5;
	
	printf("\nactivate bit at index %d of number %d, changes number to -> ", pos, num);
	bool = activate_bit(ptr, pos);
	printf("%d and the bit was %saltered (bool=%d).\n", num, (bool) ? "" : "not ", bool);
	
	return 0;
}
