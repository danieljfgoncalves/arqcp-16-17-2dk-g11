/*
 * Tiago Correia - 1151031@isep.ipp.pt
 * ARQCP - Turma 2DK
 * 
 * main.c
 * 
 */
  
#include <stdio.h>
#include "asm.h"

#define SIZE 100
	
char str1[] = "vvv aaa bbb kkk vvv lll bbb";
char *ptr1 = str1;

char str2[SIZE];
char *ptr2 = str2;

/*
 * Module 3 - Exercise 3
 */

int main(void) {
	
	str_copy_p2();
	printf("str1 = %s\nstr2 = %s\n", str1, str2);

	return 0;
}
