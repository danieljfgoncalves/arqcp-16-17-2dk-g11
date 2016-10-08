/*
 * Tiago Correia - 1151031@isep.ipp.pt
 * ARQCP - Turma 2DK
 * 
 * main.c
 * 
 */
  
#include <stdio.h>
#include "find_word.h"

/*
 * Module 1 - Exercise 19
 */
int main(){

	char str[] = "Instituto Superior de Engenharia do Porto";
	char word[] = "Porto";
	char *initial_addr = str;
	
	char *result = find_word(str, word, initial_addr);
	
	if(result == NULL){
		printf("Word not found!\n");
	}
	else {
		printf("Word found in %p\n", result);
	}
	
	return 0;
}
