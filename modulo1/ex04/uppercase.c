/*
 * Daniel Goncalves > 1151452@isep.ipp.pt
 * ARQCP - Turma 2DK
 * 
 * uppercase.c
 */
 
#include <stdio.h>
#include "uppercase.h"
/*
 * Function to replaces all lowercase letters by their uppercase counterpart.
 * char *str - the string to verify.
 */
void uppercase(char *str)
{
	while(*str != '\0')
	{
		if(*str >= 'a' && *str <= 'z')
		{
			// subtracts the gap between uppercase and lowercase letters
			// in the ASCII Table
			*str -= ('a' - 'A');
		}
		str++; // advances to the next address (index of the array)
	}
}
