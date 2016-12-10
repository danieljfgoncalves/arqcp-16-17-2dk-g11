/*
 * Tiago Correia - 1151031@isep.ipp.pt
 * ARQCP - Turma 2DK
 * 
 * ADD_BYTE.H
 * 
 */

#ifndef ADD_BYTE_H
#define ADD_BYTE_H	

/*
 * Adds a char to the first byte of each element of an array of integers and stores the result in a second array of integers.
 * 
 * int x - the given char
 * int *vec1 - the address of the first array
 * int *vec2 - the address of the second array
 * 
 */
void add_byte(int x, int *vec1, int *vec2);

#endif
