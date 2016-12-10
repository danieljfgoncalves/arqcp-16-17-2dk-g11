/*
 * Tiago Correia - 1151031@isep.ipp.pt
 * ARQCP - Turma 2DK
 * 
 * FIND_GREATER.H
 * 
 */

#ifndef SAVE_DATA_H
#define SAVE_DATA_H

typedef struct {
	short w[3];
	int j;
	char c[3];		
} s2;

/*
 * Saves given values in the s2 structure.
 * 
 * s2 *s - address of an s2 structure
 * short *vw[3] given short array
 * int vj - given int value
 * char vc[3]
 * 
 */
void save_data(s2 *s, short vw[3], int vj, char vc[3]);
#endif
