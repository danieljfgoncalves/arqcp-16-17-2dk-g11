/*
 * Daniel Goncalves > 1151452@isep.ipp.pt
 * ARQCP - Turma 2DK
 * 
 * create_str.c
 * 
 */
#include <stdio.h>
#include <stdlib.h>
#include <string.h>



/**
 * Dynamically creates a string by coping another string.
 * 
 * char str[80] - string to be copied
 */
char *create_str(char str[80]) 
{
	
	// size of the received str
	int size = strlen(str);
	
	// Allocate memory on runtime for new string.
	char *new_str = (char *) calloc(size+1, sizeof(char)); // Used calloc so we have all inicialized as '\0'.
	
	// Check calloc return encounters a problem 
	// (e.g. Requests a block of memory that is larger than the available virtual memory)
	if (new_str != NULL)
	{
		strcpy(new_str, str);
	}
	
	// if a problem was encountered returns a NULL address
	return new_str;
	
	
	// Why it is possible to return such address?
	
	// When we only know the size of a data structure during runtime
	// we can allocate memory dynamically, that is,  using dynamic memory
	// allocators (e.g. malloc) that manage the heap (virtual memory).
	// The heap expands and contracts dynamically at run time as a result 
	// of calls to allocate/free memory. It also expands in the opposite direction
	// of the stack not affecting the stack frames.
	// Summing up, the heap allows a more flexible and efficient memory management, 
	// allocating and freeing according to the real needs of the program.
}
