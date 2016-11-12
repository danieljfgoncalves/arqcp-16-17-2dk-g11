/*
 * Daniel Goncalves > 1151452@isep.ipp.pt
 * ARQCP - Turma 2DK
 * 
 * changes_vec.h
 * 
 */

#ifndef CHANGES_VEC_H
#define CHANGES_VEC_H
/**
 * Inverts the 4 least significative bits of the second byte of each integer in a vector, 
 * but only when the value of those 4 bits is greater than 7.
 * 
 * int *ptrvec - pointer to integer vector.
 * int num - number of elements in vector.
 */
void changes_vec(int *ptrvec, int num);
#endif
