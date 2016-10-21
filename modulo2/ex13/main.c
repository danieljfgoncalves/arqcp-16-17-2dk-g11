/*
 * Tiago Correia - 1151031@isep.ipp.pt
 * ARQCP - Turma 2DK
 * 
 * main.c
 * 
 */
  
#include <stdio.h>
#include "asm.h"
	
int result = 0;
int a = 0, b = 0, c = 0, d = 0;

/*
 * Module 2 - Exercise 13
 */

int main(void) {
	
	printf("Expression: A + (B * C) / D\n");
	
	printf("Insert number A: ");
	scanf("%d",&a);
	
	printf("Insert number B: ");
	scanf("%d",&b);
	
	printf("Insert number C: ");
	scanf("%d",&c);
	
	printf("Insert number D: ");
	scanf("%d",&d);
	
	result = math_operation();
	
	printf("%d + (%d * %d) / %d = %d\n", a, b, c, d, result);
	
	return 0;
}
