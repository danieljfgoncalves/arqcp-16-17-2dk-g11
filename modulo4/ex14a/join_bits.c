/*
 * Daniel Goncalves > 1151452@isep.ipp.pt
 * ARQCP - Turma 2DK
 * 
 * join_bits.c
 * 
 */

#define mask(n)		((~0)<<(n+1))
#define mask2(n)		(~(mask(n)))

/**
 * Joins bits from two ints at a given position (values of *b* left of pos & values of *a* right (inclusive) of pos).
 * 
 * int a - first integer.
 * int b - second integer.
 * int pos - position to activate (from 0...31).
 * 
 * Returns the new joined integer.
 */
int join_bits(int a, int b, int pos)
{
	int result = b & mask(pos);

	result |= (a & mask2(pos));
	
	return result;
}
