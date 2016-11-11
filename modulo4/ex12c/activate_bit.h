/*
 * Daniel Goncalves > 1151452@isep.ipp.pt
 * ARQCP - Turma 2DK
 * 
 * activate_bit.h
 * 
 */
#ifndef ACTIVATE_BIT_H
#define ACTIVATE_BIT_H

/**
 * Activates a bit (switch to 1) in a given position.
 * 
 * int *ptr - pointer to integer.
 * int pos - position to activate (from 0...31).
 * 
 * Returns 1 if altered, 0 otherwise.
 */
int activate_bit(int *ptr, int pos);
#endif
