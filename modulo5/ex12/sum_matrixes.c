/*
 * Daniel Goncalves > 1151452@isep.ipp.pt
 * ARQCP - Turma 2DK
 * 
 * sum_matrixes.c
 * 
 */
#include "create_matrix.h"

/*
 * Sums two YxK matrixes and stores in a dynamically created matrix.
 */
int **sum_matrixes(int **a, int **b, int y, int k)
{
	int **sum_m = create_matrix(y, k);
	
	int i, j;
	for (i = 0; i < y; i++)
	{
		for (j = 0; j < k; j++)
		{
			sum_m[i][j] = a[i][j] + b[i][j];
		}
	}
	
	return sum_m;
}
