/*
 * Daniel Goncalves > 1151452@isep.ipp.pt
 * ARQCP - Turma 2DK
 * 
 * join_bits.h
 * 
 */
#ifndef JOIN_BITS_H
#define JOIN_BITS_H
/**
 * Joins bits from two ints at a given position (values of b left of pos & values of a right (inclusive) of pos).
 * 
 * int a - first integer.
 * int b - second integer.
 * int pos - position to activate (from 0...31).
 * 
 * Returns the new joined integer.
 */
int join_bits(int a, int b, int pos);
#endif
