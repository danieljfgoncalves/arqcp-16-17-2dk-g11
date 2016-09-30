/*
 * Tiago Correia - 1151031@isep.ipp.pt
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
	int i = 0;
	while(str[i] != '\0')
	{
		if(str[i] >= 'a' && *str <= 'z')
		{
			// subtracts the gap between uppercase and lowercase letters
			// in the ASCII Table
			str[i] -= ('a' - 'A');
		}
		i++; // advances to the next address (index of the array)
	}
}
