/*
 * Daniel Goncalves > 1151452@isep.ipp.pt
 * ARQCP - Turma 2DK
 * 
 * read_short_array.c
 */
 #include <stdio.h>
 
 
/*
 * Reads from keyboard a short array.
 * 
 */
void read_short_array(short* shorts, int n)
{

	int i;
	for (i = 0; i < n; i++)
	{
		printf("Write the %d%s element: ", (i + 1), (i + 1 == 1) ? "st" : (i + 1 == 2) ? "nd" : (i + 1 == 3) ? "rd" : "th");
		scanf("%hi", (shorts + i));
	}
}
