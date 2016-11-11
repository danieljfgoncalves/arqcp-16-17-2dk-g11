/*
 * Daniel Goncalves > 1151452@isep.ipp.pt
 * ARQCP - Turma 2DK
 * 
 * vec_count_bits_zero.h
 * 
 */

#ifndef VEC_COUNT_BITS_ZERO_H
#define VEC_COUNT_BITS_ZERO_H

/**
 * Count the number of inactive bits (value 0) in a vector of integer values.
 * 
 * int *ptr - pointer to vector.
 * int num - number of elements in vector.
 * 
 * Returns the number of inactive bits of the vector.
 */
int vec_count_bits_zero(int *ptr, int num);
#endif
