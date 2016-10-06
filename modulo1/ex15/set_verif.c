/*
 * Tiago Correia - 1151031@isep.ipp.pt
 * ARQCP - Turma 2DK
 * 
 * set_verif.c
 * 
 */
 
#include <stdio.h>

/*
 * Checks how many sets of three numbers verify the condition Vi < Vi+1 < Vi+2.
 * 
 * *vec - array to verify
 * size - size of given array
 */
int set_verif(int pos1, int pos2, int pos3){
	return (pos1 == pos2-1) 
				? (pos2 == pos3-1) 
					? 1 : 0 : 0;
}
