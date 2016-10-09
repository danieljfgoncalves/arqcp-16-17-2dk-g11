/*
 * Daniel Goncalves > 1151452@isep.ipp.pt
 * ARQCP - Turma 2DK
 * 
 * main.c
 */
  
#include <stdio.h>
#include "find_all_words.h"
#include "count_words.h"

void print_pointers_array(char** addrs);

/*
 * Module 1 - Exercise 20
 */
int main(){

	char str[] = "I have a Big car a big house and a big nothing";
	char word[] = "big";
	
	// We can ensure the size by checking how many chars are in the string
	// it will give you the maximum size of the pointers array needed if all 
	//chars where a match.
	//
	// int size = ((int) sizeof(str));
	
	// Or we can calculate the number of words in the string and that will
	// be a more precise maximum size of the array of pointers needed.
	int n_addrs = count_words(str);
	
	// we make the last element 0 so once the addrs are filled we know the
	// last position filled by searching for a 0.
	// +1 because if every position expected is filled we need one more for the 0.
	char* addrs[n_addrs + 1]; 
	addrs[0] = 0; // Set the first element to 0, the function will shift the 0 forward in the array.
	
	find_all_words(str, word, addrs); // the element that has a 0 value is the last in the array addrs.
	
	printf("The string \"%s\" has the word \"%s\" in these addresses:\n\n", str, word);
	
	print_pointers_array(addrs);

	return 0;
}

/*
 * Print pointers of found words.
 * 
 * char** addrs - address of pointers array.
 */
void print_pointers_array(char** addrs) 
{
	if (addrs[0] == 0)
	{
		printf("word wasn't found\n");
	} else
	{
		while (*addrs != 0)
		{
			printf("%p = %s\n", *addrs, *addrs);
			addrs++;
		}
	}
	
	
}
