/*
 * Tiago Correia - 1151031@isep.ipp.pt
 * ARQCP - Turma 2DK
 * 
 * activate_bits.c
 * 
 */
 
#include <stdio.h>

#define mask_shr(pos)	(0xFFFFFFFF >> (31 - pos))
#define mask_shl(pos)	(0xFFFFFFFF << (pos))
#define mask(l, r)		(mask_shr(l) ^ mask_shl(r))

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
	
	return (a | mask(left, right));
}

