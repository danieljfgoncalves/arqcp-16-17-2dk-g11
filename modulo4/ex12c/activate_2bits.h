/*
 * Daniel Goncalves > 1151452@isep.ipp.pt
 * ARQCP - Turma 2DK
 * 
 * activate_2bits.h
 * 
 */
#ifndef ACTIVATE_2BITS_H
#define ACTIVATE_2BITS_H

/**
 * Activates a two bits (switch to 1) in a given position pos and in position 31 - pos.
 * 
 * int *ptr - pointer to integer.
 * int pos - position to activate (from 0...31).
 */
void activate_2bits(int *ptr, int pos);
#endif
