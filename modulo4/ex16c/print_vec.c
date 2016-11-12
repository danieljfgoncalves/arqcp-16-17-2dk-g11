/*
 * Daniel Goncalves > 1151452@isep.ipp.pt
 * ARQCP - Turma 2DK
 * 
 * print_vec.c
 */
 
#include <stdio.h>

/*
 * Function to print a vector with n number of integers.
 * int *vec - the vetor to print.
 * int n - the number of integers to print. 
 */
void print_int_vec(int *vec, int n)
{
	printf("\n{ %08x", *vec);
	
	int i;
	for(i = 1; i < n ; i++)
	{
		printf(", %08x", *(vec + i));
	}
	
	printf(" }\n");
}
