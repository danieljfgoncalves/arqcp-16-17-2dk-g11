/*
 * Tiago Correia - 1151031@isep.ipp.pt
 * ARQCP - Turma 2DK
 * 
 * activate_bits.c
 * 
 */
 
#include <stdio.h>

/*
 * Receives a number and activates all the bits at the left of specified left bit and at right of specified right bit.
 * 
 * int a - the number to modify
 * int left - the left bit
 * int right - the right bit
 * 
 * returns the resulting number of bit activation
 * 
 */
int activate_bits(int a, int left, int right){
	int aux = -1; //11111111111111111111111111111111
	int aux2 = ~2147483647; //10000000000000000000000000000000
	
	aux = aux << (right-1); // fills 0's right of the right variable
	aux2 = aux2 >> (31-left); //fills 1's left of the left variable (31 because of signed bit which is already 1)
	
	aux = ~aux;
	
	int mask = aux | aux2;
	
	return a | mask;
	

}
