/*
 * Daniel Goncalves > 1151452@isep.ipp.pt
 * ARQCP - Turma 2DK
 * 
 * power_ref.c
 */
 
#include <stdio.h>

/*
 * Calculates the power of x by y.
 * int *x - address of x.
 * int y - value of y.
 */
void power_ref(int *x, int y)
{
	// because we are dealing with integers it is not necessary to consider
	// negative powers (ex. 2^-3), they will all return 0 and power -1 will return 1.
	
	int base = *x; // The base for which the new number will be powered.
	
	if(y == 0) // Any number powered by 0 is always 1.
	{
		*x = 1;
	} 
	else if(y > 0)
	{
		while(y > 1) // the number will be multiplied by itself (y-1) times.
		{
			*x *= base;
			y--;
		}
	}
	else // (1 / x^|y|)
	{
		y *= -1; // make it a positive integer
		while(y > 1) // the number will be multiplyed by itself (y-1) times.
		{
			*x *= base;
			y--;
		}
		*x = 1 / *x;
	}
}
