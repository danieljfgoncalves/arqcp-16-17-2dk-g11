/*
 * Daniel Goncalves > 1151452@isep.ipp.pt
 * ARQCP - Turma 2DK
 * 
 * main.c
 * 
 */
#include <stdio.h>
#include "asm.h"

char a = 0;
short int b = 0;
int c = 0;
int d = 0;

/*
 * Module 2 - Exercise 8
 */
int main(void) {
	
	printf("Valor A:");
	scanf("%hhd",&a);
	
	printf("Valor B:");
	scanf("%hd",&b);
	
	printf("Valor C:");
	scanf("%d",&c);
	
	printf("Valor D:");
	scanf("%d",&d);
	
	long long int res = operation();
	
	printf("\n%hhd + %hd - %d + %d = %lld\n", a, b, c, d, res);
	
	return 0;
}
