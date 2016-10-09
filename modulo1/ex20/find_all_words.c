/*
 * Daniel Goncalves > 1151452@isep.ipp.pt
 * ARQCP - Turma 2DK
 * 
 * find_all_words.c
 */
 
#include <stdio.h>
#include "find_word.h"
 
/*
 * Finds all ocurrences of a specific word in a string.
 * 
 * char *str - string received
 * char* word - word to search
 * char** addrs - array of pointers of each occurence.
 * 
 */
void find_all_words(char *str, char* word, char** addrs)
{
		while (find_word(str, word, str) != NULL)
		{
			*addrs = find_word(str, word, str);
			str = *addrs + 1;
			addrs++;
			*addrs = 0; // Sets the last address to 0 to help loop throught the array.
		}
}
