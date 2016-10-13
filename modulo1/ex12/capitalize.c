/*
 * Daniel Goncalves > 1151452@isep.ipp.pt
 * ARQCP - Turma 2DK
 * 
 * capitalize.c
 */

#include <stdio.h>

/*
 * Capitalizes the words of a sentence.
 * char *str - the address of the string.
 */
void capitalize(char *str)
{
	// subtracts the gap between uppercase and lowercase letters
	// in the ASCII Table
	char gap = ('a' - 'A');
	
	if(*str >= 'a' && *str <= 'z')
	{
		*str -= gap; // Capitalize the first word of the sentence.
	}
	
	str++; // Star the cycle at the next address (index of array)
	while(*str != '\0')
	{
		// Capitalizes every char after a space, if it isn't capitalized
		// already.
		if(*(str - 1) == ' ' && (*str >= 'a' && *str <= 'z'))
		{
			*str -= gap;
		}
		str++; // advances to the next address (index of the array)
	}
}
