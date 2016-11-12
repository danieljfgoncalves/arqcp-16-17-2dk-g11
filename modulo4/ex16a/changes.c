/*
 * Daniel Goncalves > 1151452@isep.ipp.pt
 * ARQCP - Turma 2DK
 * 
 * changes.c
 * 
 */

#define MASK1 0x00000800 // 4 least significative bits of the second byte of an integer is greater than 7
#define MASK2 0x00000f00

/**
 * Inverts the 4 least significative bits of the second byte of an integer, 
 * but only when the value of those 4 bits is greater than 7.
 * 
 * int *ptr - pointer to integer.
 */
void changes(int *ptr)
{
	if (*ptr & MASK1)
	{
		*ptr ^= MASK2;
	}
}
