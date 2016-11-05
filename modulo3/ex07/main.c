/*
 * Tiago Correia - 1151031@isep.ipp.pt
 * ARQCP - Turma 2DK
 * 
 * main.c
 * 
 */
  
#include <stdio.h>
#include "encrypt.h"
#include "decrypt.h"

char str[] = "Instituto Superior da Maia";
char *ptr1 = str;

/*
 * Module 3 - Exercise 7
 */

int main(void) {
	
	//encrypt - ex 6
	printf("original: %s", str);
	int num = encrypt();
	printf("\nencrypted: %s\nnumber of changed characters: %d\n", str, num);

	//decrypt - ex 7
	num = decrypt();
	printf("\ndecrypted: %s\nnumber of changed characters: %d\n", str, num);
	
	return 0;
}
