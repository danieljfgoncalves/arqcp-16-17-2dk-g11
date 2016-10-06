/*
 * Daniel Goncalves > 1151452@isep.ipp.pt
 * ARQCP - Turma 2DK
 * 
 * where_exists.c
 */

#include <stdio.h>

/*
 * Determines if the first string exist within the second string.
 * char *str1 - the address of the first string.
 * char *str2 - the address of the second string.
 * 
 * return the pointer to the beginning of the first (or only) occurence
 * or NULL otherwise.
 */
char* where_exists(char *str1, char *str2)
{
	while(*str2 != '\0')
	{
		// verifies if the elements on the two trings are equal and if they are not equal to '\0'
		// (no need to verify *(str2 + i) != '\0', because if true it won't satisfy one of the other two conditions)
		int i = 0;
		while(*(str1 + i) == *(str2 + i) && *(str1 + i) != '\0')
		{
			i++;
		}
		
		if (*(str1 + i) == '\0')
		{
			return str2;
		}
		str2++; // advances to the next address (index of the array)
	}
	return NULL;
}
