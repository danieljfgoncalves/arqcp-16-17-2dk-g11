/*
 * Tiago Correia - 1151031@isep.ipp.pt
 * ARQCP - Turma 2DK
 * 
 * ACTIVATE_INVERT_BITS.H
 * 
 */

#ifndef ACTIVATE_INVERT_BITS_H
#define ACTIVATE_INVERT_BITS_H

/*
 * Receives a number and activates all the bits at the left of specified left bit and at right of specified right bit and then inverts the result.
 * 
 * int a - the number to modify
 * int left - the left bit
 * int right - the right bit
 * 
 * returns the resulting number of bit activation
 * 
 */
int activate_invert_bits(int a, int left, int right);

#endif
