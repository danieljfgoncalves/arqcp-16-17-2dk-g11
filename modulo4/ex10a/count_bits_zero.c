/*
 * Daniel Goncalves > 1151452@isep.ipp.pt
 * ARQCP - Turma 2DK
 * 
 * count_bits_zero.c
 * 
 */

/**
 * Count the number of inactive bits (value 0) in a integer value.
 * 
 * x - integer to verify.
 * 
 * Returns the number of inactive bits.
 */
int count_bits_zero(int x)
{
	int count = 0;
	
	unsigned int ux = x; // cast to unsigned so we can treat negative ints too.
	
	while(ux)
	{
		if (!(ux & 1))
		{
			count++;
		}
		ux = ux >> 1;
	}
	
	return count;
}
