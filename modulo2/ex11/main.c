/*
 * Tiago Correia - 1151031@isep.ipp.pt
 * ARQCP - Turma 2DK
 * 
 * main.c
 * 
 */
  
#include <stdio.h>
#include "asm.h"
	
char result = 0;
int a = 0, b = 0;

/*
 * Module 2 - Exercise 11
 */

int main(void) {
	
	printf("Insert number A: ");
	scanf("%d",&a);
	
	printf("Insert number B: ");
	scanf("%d",&b);
	
	result = isMultiple();
	
	if(result == 1){
		printf("%d is multiple of %d!\n", a, b);
	} else {
		printf("%d is not multiple of %d!\n", a, b);
	}
	
	return 0;
}
