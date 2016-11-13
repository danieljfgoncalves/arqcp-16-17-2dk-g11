/*
 * Tiago Correia - 1151031@isep.ipp.pt
 * ARQCP - Turma 2DK
 * 
 * rotate_right.c
 * 
 */
 
#include <stdio.h>

/*
 * Rotates a number value, nbits to the right
 * 
 * int num - number to rotate
 * int nbits - number of bits for the rotation 
 * 
 */
int rotate_right(int num, int nbits){
	
	unsigned u_num = num; //cast to unsigned so we can treat negative ints too.
	
	return (u_num << nbits) | (u_num >> (32 - nbits));
}
