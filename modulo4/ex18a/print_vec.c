/*
 * Daniel Goncalves > 1151452@isep.ipp.pt
 * ARQCP - Turma 2DK
 * 
 * print_vec.c
 */
 
#include <stdio.h>

/*
 * Function to print a vector with n number of chars and 0 terminated.
 * char *vec - the vetor to print.
 */
void print_char_vec(char *vec)
{
	printf("\n{ %hhd", *vec++);
	
	while(*vec != 0)
	{
		printf(", %hhd", *vec);
		vec++;
	}
	
	printf(" }\n");
}
