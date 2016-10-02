/*
 * Tiago Correia - 1151031@isep.ipp.pt
 * ARQCP - Turma 2DK
 * 
 * char_index_finder.c
 * 
 */
 
#include <stdio.h>

/*
 * Receives the addresses of a string, an empty integer array and a character. Checks the string for a specific character and fills the integer array with the indexes where the character can be found.
 * str - the address of the string
 * vec - the address of integer array
 * c - the character to verify
 * 
 * returns the final size of the integer array
 */
int char_index_finder(char *str, char c, int *vec){
	
	int i = 0;
	int vec_size = 0;
	while(*(str + i) != '\0'){
		if(*(str + i) == c || *(str + i) == c-32 || *(str + i) == c+32){ /* 32 is the difference between lowercase and uppercase characters */
			vec[vec_size] = i;
			vec_size++;
			i++;
		} else {
			i++;
		}
	}
	return vec_size;
}
