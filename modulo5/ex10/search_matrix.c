/*
 * Daniel Goncalves > 1151452@isep.ipp.pt
 * ARQCP - Turma 2DK
 * 
 * search_matrix.c
 * 
 */

/*
 * Searches the number received in num in a YxK matrix pointed by m.
 */
int search_matrix(int **m, int y, int k, int num)
{
	int i, j;
	for (i = 0; i < y; i++)
	{
		for (j = 0; j < k ; j++)
		{
			if (num == m[i][j])
			{
				return 1;
			}
		}
	}
	return 0;
}
