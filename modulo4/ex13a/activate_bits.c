/*
 * Tiago Correia - 1151031@isep.ipp.pt
 * ARQCP - Turma 2DK
 * 
 * activate_bits.c
 * 
 */
 
#include <stdio.h>

long hex = 0x80000000;

#define mask_shr(pos)	(hex >> (31 - pos))
#define mask_shl(pos)	(~0 << (pos - 1))

#define mask(l, r)		(~(mask_shr(l)) ^ mask_shl(r))

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
	
	unsigned int unsigned_a = a; //cast to unsigned so we can treat negative ints too.
	
	return (unsigned_a | mask(left, right));
	

}
