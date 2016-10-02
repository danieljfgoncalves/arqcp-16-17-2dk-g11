/*
 * Tiago Correia - 1151031@isep.ipp.pt
 * ARQCP - Turma 2DK
 * 
 * main.c
 * 
 */
  
#include <stdio.h>
#include "char_index_finder.h"

/*
 * Module 1 - Exercise 13
 */
int main(){
	
	char str[] = "Instituto Superior de Engenharia do Porto";
	char c = 'e';
	
	/* gives the size of the string */
	int i = 0;
	int str_size = 1;
	while(*(str + i) != '\0'){
		str_size++;
		i++;
	}
	
	int vec[str_size];
	
	int vec_size = char_index_finder(str, c, vec);
	
	/* prints vec array */
	printf("The character '%c' can be found in the following indexes of the given string: ", c);
	for(i = 0; i < vec_size; i++){
		printf("%d  ", *(vec + i));
	}
	printf("\n");
	
	return 0;
}
