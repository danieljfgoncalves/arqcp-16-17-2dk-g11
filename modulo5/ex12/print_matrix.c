/*
 * Daniel Goncalves > 1151452@isep.ipp.pt
 * ARQCP - Turma 2DK
 * 
 * print_matrix.c
 * 
 */
#include <stdio.h>

/*
 * Prints an integer matrix of YxK.
 */
void print_matrix(int **m, int y, int k)
{
	int i, j;
	for (i = 0; i < y; i++)
	{
		for (j = 0; j < k; j++)
		{
			printf("%d	", m[i][j]);
		}
		printf("\n");
	}
	printf("\n");
}
