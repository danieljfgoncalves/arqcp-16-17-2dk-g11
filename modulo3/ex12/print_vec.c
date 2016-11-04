/*
 * Daniel Goncalves > 1151452@isep.ipp.pt
 * ARQCP - Turma 2DK
 * 
 * print_vec.c
 */
 
#include <stdio.h>

/*
 * Function to print a vector with n number of short integers.
 * short int *vec - the vetor to print.
 * int n - the number of integers to print. 
 */
void print_short_vec(short int *vec, int n) 
{
	printf("\n{ %hd", *vec);
	
	int i;
	for(i = 1; i < n ; i++)
	{
		printf(", %hd", *(vec + i));
	}
	
	printf(" }\n");
}
