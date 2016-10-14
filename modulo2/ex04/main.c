/*
 * Daniel Goncalves > 1151452@isep.ipp.pt
 * ARQCP - Turma 2DK
 * 
 * main.c
 * 
 */
  
#include <stdio.h>
#include "asm.h"
	
int op1 = 0, op2 = 0, op3 = 0, res = 0;

/*
 * Module 2 - Exercise 4
 */

int main(void) {
	
	printf("Valor op1:");
	scanf("%d",&op1);
	
	printf("Valor op2:");
	scanf("%d",&op2);
	
	printf("Valor op3:");
	scanf("%d",&op3);
	
	res = sum();
	
	printf("sum = %d:0x%x\n", res,res);
	
	res = sum_op1_op2_sub_op3();
	
	printf("sum_op1_op2_sub_op3 = %d:0x%x\n", res,res);
	
	res = sub_const();
	
	printf("\nCONST = 10\n (op1 - CONST) - (CONST - op2) = %d:0x%x\n", res,res);
	
	return 0;
}
