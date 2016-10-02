/*
 * Tiago Correia - 1151031@isep.ipp.pt
 * ARQCP - Turma 2DK
 * 
 * main.c
 * 
 */
  
#include <stdio.h>
#include "palindrome.h"
#include "string_treatment.h"

/*
 * Module 1 - Exercise 11
 */
int main(){
	
	char str1[] = "A man a plan a canal, Panama";
	  
	//reads the size of any string in str1
	int str_size = 1;
	int i = 0;
	while(str1[i] != '\0'){
		str_size++;
		i++;
	}
	
	char str2[str_size]; /* creates a new empty string long enough to hold str1 */
	
	string_treatment(str1, str2); /* removes spaces, punctuation and chages uppercase letters to lowercase */
		
	int result;
	result = palindrome(str2); /* checks if the treated string is a palindrome or not */

	if(result == 1){
		printf("'%s' is a palindrome.\n", str1);
	} else if (result == 0){
		printf("'%s' is not a palindrome.\n", str1);
	}
	
	return 0;
}
