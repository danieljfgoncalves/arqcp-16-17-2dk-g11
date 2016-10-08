/*
 * Tiago Correia - 1151031@isep.ipp.pt
 * ARQCP - Turma 2DK
 * 
 * find_word.c
 * 
 */
 
#include <stdio.h>
#include <ctype.h>
#include "same_word.h"

/*
 * Searches for a specific word in a string.
 * 
 * char *str - string received
 * char* word - word to search
 * char* initial_addr - address where the search must begin
 * 
 * returns the address of the position in the string where the word was found or NULL if the word does not exist in the string
 */
char* find_word(char *str, char* word, char* initial_addr){
	
	/* Changes string to lowercase */
	int i;
	for(i = 0; *(str + i) != '\0'; i++){
		*(str + i) = tolower(*(str + i));
	}
	
	/* Changes word to lowercase */
	for(i = 0; *(word + i) != '\0'; i++){
		*(word + i) = tolower(*(word + i));
	}
	
	i = 0;
	while (*(initial_addr + i) != '\0'){
		if (i == 0)
		{
			if (same_word(word, initial_addr) == 1)
			{
				return initial_addr;
			}
		} else if(*(initial_addr + i) == ' '){
			if (same_word(word, (initial_addr + i + 1)) == 1)
			{
				return initial_addr;
			}
		} i++;
	}
	return NULL;
}
