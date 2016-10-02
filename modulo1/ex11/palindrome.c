/*
 * Tiago Correia - 1151031@isep.ipp.pt
 * ARQCP - Turma 2DK
 * 
 * palindrome.c
 * 
 */
 
#include <stdio.h>

/*
 * Receives a string and checks if it is a palindrome or not.
 * 
 * returns 0 if it is not a palindrome
 * returns 1 if it is a palindrome
 */
 int palindrome(char *str){
 
	//this step would not be needed if the size was passed as a parameter. I did not do it in order to respect the method description in the exercise sheet
	int str_size = 1;
	int i = 0;
	while(str[i] != '\0'){
		str_size++;
		i++;
	}
	
	int inicio = 0;
	int final = (str_size-2); /* does not consider the '\0' */
	for(inicio = 0; inicio < final; inicio++){	
		if(str[inicio] != str[final]){ /* if two characters do not match, the string is not a palindrome */
			return 0;
		}
		final--;
	}
	return 1;
 }
