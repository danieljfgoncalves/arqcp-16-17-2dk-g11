/*
 * Tiago Correia - 1151031@isep.ipp.pt
 * ARQCP - Turma 2DK
 * 
 * same_word.c
 * 
 */
 
#include <stdio.h>

/*
 * Compares words in the string address with the word received
 * 
 * returns 1 or 0 depending if a word matches with a word in the given string or not.
 */
int same_word(char *word, char *str){
	
	while(*str != ' ' && *str != '\0'){
		if(*word != *str){
			return 0;
		}
		word++;
		str++;
	} 
	return 1;
}
