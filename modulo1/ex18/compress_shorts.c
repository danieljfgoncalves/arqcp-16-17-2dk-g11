/*
 * Daniel Goncalves > 1151452@isep.ipp.pt
 * ARQCP - Turma 2DK
 * 
 * compress_shorts.c
 */

#include <stdio.h>

/*
 * Compresses a array of shorts to an array of integers
 * short *shorts - array of shorts.
 * int n_shorts - array of shorts.
 * int *integers - array of integers.
 * 
 */
void compress_shorts(short* shorts, int n_shorts, int* integers)
{
	short *ptr = (short *) integers;
	
	int i;
	for(i = 0; i < n_shorts; i ++)
	{
		*(ptr + i) = *(shorts + i);
	}
}
