/*
 * Daniel Goncalves > 1151452@isep.ipp.pt
 * ARQCP - Turma 2DK
 * 
 * main.c
 * 
 */
#include <stdio.h>
#include "asm.h"

#define SIZE 80 // 40 bytes + 40 bytes

char str1[] = "I live in a house with a dog named Kelly"; // String 40 bytes.
char *ptr1 = str1;

char str2[] = ", she is a white coat golden retriever!!"; // String 40 bytes.
char *ptr2 = str2;

char str3[SIZE];
char *ptr3 = str3;

/*
 * Module 3 - Exercise 10
 */
int main(void) {
	
	printf("  String 1: %s\n  String 2: %s\n\n", str1, str2);
	
	str_cat();
	printf("Concat Str: %s\n", str3);
	
	return 0;
}
