/*
 * Daniel Goncalves > 1151452@isep.ipp.pt
 * ARQCP - Turma 2DK
 * 
 * activate_bit.c
 * 
 */

/**
 * Activates a bit (switch to 1) in a given position.
 * 
 * int *ptr - pointer to integer.
 * int pos - position to activate (from 0...31).
 * 
 * Returns 1 if altered, 0 otherwise.
 */
int activate_bit(int *ptr, int pos)
{
	int tmp = *ptr;
	
	int aux = 1;
	aux <<= pos;
	
	*ptr |= aux; // *ptr OR aux
	
	return *ptr == tmp ? 0 : 1;
}
